#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    int total=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    
    }
    
    int j=n-1;
    int count=0;
    for(int i=0;i<n/2;i++){
        if(s==total){
            break;
        }
        if(a[i]=='1' && a[j]=='0'){
            total--;
            count++;
             if(s==total){
            break;
        }
        }
   else if(a[j]=='1' && a[i]=='0'){
  total--;
            count++;
             if(s==total){
            break;
        }
        }
           else if(a[i]=='1' && a[j]=='1'){
  total--;
            count++;
             if(s==total){
            break;
        }
        else{
            total--;
            count++;
        }
        }
        else{
            count+=2;
        }
        j--;
        }
        
cout<<count<<'\n';    
}

    return 0;
}
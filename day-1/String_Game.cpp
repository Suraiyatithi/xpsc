#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   string a;
   cin>>a;
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            zero++;
        }
        else if(a[i]=='1'){
            one++;
        }
    }
        if(zero==0 || one==0){
        cout<<"Ramos"<<'\n';
        continue;
    }
   int x=min(zero,one);
   if(x%2!=0){
    cout<<"Zlatan"<<'\n';
   }
   else{
    cout<<"Ramos"<<'\n';
   }
}
    return 0;
}
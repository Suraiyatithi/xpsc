#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int t=0;
     for(int i=0;i<n-1;i++){
        t+=a[i];
    }
    if(t==0){
        cout<<0<<'\n';
    }
   else{
     int j=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=0){
            j=i;
break;
        }
    }
int count=0;
long long sum=0;
    for(int i=j;i<n-1;i++){
        if(a[i]==0){
            count++;
        }
        sum+=a[i];
    }
    cout<<sum+count<<'\n';
   }
}
    return 0;
}
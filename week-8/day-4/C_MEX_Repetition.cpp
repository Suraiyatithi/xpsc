#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>v,t;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    t=v;
    sort(t.begin(),t.end());
   long long m=n;
   for(long long i=0;i<n;i++){
    if(t[i]!=i){
        m=i;
        break;
    }
   } 
   long long b;
   for(long long i=0;i<n;i++){
    b=v[i];
    v[i]=m;
    m=b;
   }
   v.push_back(m);
   long long last=(k-1)%(n+1);
   for(long long i=(n+1- last);i<(n+1);i++){
    cout<<v[i]<<" ";
}
for(long long i=0;i<(n-last);i++){
    cout<<v[i]<<" ";
}
cout<<'\n';
}
    return 0;
}
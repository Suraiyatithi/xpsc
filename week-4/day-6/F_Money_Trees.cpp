#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
long long arr[n];
long long h[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cin>>h[i];
}
long long cur=arr[0];
long long ans=0;
long long l=0,r=1;
if(cur<=k) ans=1;
while(r<n){
    if(h[r-1]%h[r]==0) cur+=arr[r];
else{
    cur=arr[r];
    l=r;

}
while(cur>k){
    cur-=arr[l];
    l++;
}
ans=max(ans,r-l+1);
r++;
}
cout<<ans<<'\n';
}
    return 0;
}
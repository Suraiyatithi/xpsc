#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<long long>p(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            p[i]=a[i];
        }
        else{
            p[i]=p[i-1]+a[i];
        }
    }
    long long ans=0;
    for(int i=1;i<n;i++){
        ans=max(ans,__gcd(p[i-1],p[n-1]-p[i-1]));
    }
    cout<<ans<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
int t;
cin>>t;
while(t--){
    long long x,y,k;
    cin>>x>>y>>k;
    long long z=(y%MOD*k%MOD)%MOD;
    long long res=(x+1)/z;
    cout<<res<<'\n';
}
    return 0;
}


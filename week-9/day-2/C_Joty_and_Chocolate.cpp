#include<bits/stdc++.h>
using namespace std;
long long lcm(long long  x,long long y){
    return ((x/__gcd(x,y))*y);
}
int main(){
long long n,a,b,p,q;
cin>>n>>a>>b>>p>>q;
long long overlap=(n/lcm(a,b));
long long cnt1=((n/a)-overlap)*p;
long long cnt2=((n/b)-overlap)*q;
long long res=overlap*max(p,q);
cout<<res+cnt1+cnt2<<'\n';
    return 0;
}
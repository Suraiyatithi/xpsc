#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long m,a,b,c;
    cin>>m>>a>>b>>c;
    long long r1=min(a,m);
    long long r2=min(b,m);
    long long x=m-r1;
    long long y=m-r2;
    long long z=min(c,x+y);
    cout<<r1+r2+z<<'\n';
}
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
     double s=(a+b+c)/2.0;
    double area=sqrt(s * (s - a) * (s - b) * (s - c));
    long long n=4*area*area;
    long long d=(a+b+c)*(a+b+c);
    long long g=gcd(n,d);
    n/=g;
    d/=g;
    cout<<n<<"/"<<d<<'\n';
}
    return 0;
}



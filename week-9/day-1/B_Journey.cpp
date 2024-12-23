#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
   long long cy=a+b+c;
   long long f=n/cy;
   long long cover=cy*f;
   long long remain=n-cover;
   long long day=0;
   if(remain>0){
    ++day;
    remain-=a;
   }
   if(remain>0){
    ++day;
    remain-=b;
   }
     if(remain>0){
    ++day;
    remain-=c;
   }
cout<<(f*3)+day<<'\n';
}
    return 0;
}
 
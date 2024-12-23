#include<bits/stdc++.h>
using namespace std;
int main(){
long long x;
cin>>x;
long long min_max=x;
pair<long long,long long>p={1,x};
for(long long i=1;i*i<=x;i++){
    if(x%i==0){
       long long a=i;
       long long b=x/i;
      if(__gcd(a,b)==1){
        if(max(a,b)<min_max){
            min_max=max(a,b);
            p={a,b};
        }
      }
    }
}
cout<<p.first<<" "<<p.second<<'\n';
    return 0;
}

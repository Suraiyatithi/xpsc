#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
long long k;
cin>>n>>k;
vector<long long>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int l=0,r=0;
long long ans=0;
multiset<long long>ml;
while(r<n){
    ml.insert(a[r]);
    auto mn=*ml.begin();
    auto mx=*ml.rbegin();
    if(mx-mn<=k){
        ans+=r-l+1;
    }
    else{
        while(l<=r){
            auto mn1=*ml.begin();
            auto mx1=*ml.rbegin();
            if(mx1-mn1<=k){
                break;
            }
            ml.erase(ml.find(a[l]));
            l++;
        }
         auto mn2=*ml.begin();
    auto mx2=*ml.rbegin();
    if(mx2-mn2<=k){
        ans+=r-l+1;
    }
    }
    r++;
}
cout<<ans<<'\n';
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int l=0,r=0;
map<int,int>cnt;
long long ans=0;
while(r<n){
    cnt[a[r]]++;
    if(cnt.size()<=k){
        ans+=r-l+1;
    }
    else{
        while(cnt.size()>k && l<=r){
            cnt[a[l]]--;
            if(cnt[a[l]]==0){
                cnt.erase(a[l]);
            }
            l++;
        }
         if(cnt.size()<=k){
        ans+=r-l+1;
    }
    }
    r++;
}
cout<<ans<<'\n';
    return 0;
}
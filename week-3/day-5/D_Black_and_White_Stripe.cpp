#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int l=0,r=0;
    int count=0,ans=INT_MAX;
    while(r<n){
        if(s[r]=='W'){
            count++;
        }
        if(r-l+1==k){
            ans=min(ans,count);
            if(s[l]=='W'){
                count-=1;
            }
            l++;
        }
        r++;
    }
    cout<<ans<<'\n';
    }
    return 0;
}
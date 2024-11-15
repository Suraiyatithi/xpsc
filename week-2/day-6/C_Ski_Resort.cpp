#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans=0;
    long long cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=q){
            cnt++;
        }
        else{
            if(cnt>=k){
                ans+=(cnt*1LL*(cnt+1))/2-((k-1)*cnt-((k-2)*(k-1))/2);
            }
            cnt=0;
        }
    }
    if(cnt>=k){
                        ans+=(cnt*1LL*(cnt+1))/2-((k-1)*cnt-((k-2)*(k-1))/2);
    }
    cout<<ans<<'\n';
}
    return 0;
}
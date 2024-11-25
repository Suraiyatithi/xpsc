#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=k){
            int r=x%k;
            ans=min(ans,r);
        }
    }
   if(ans==INT_MAX){
    cout<<-1<<'\n';
   }
   else  cout<<ans<<'\n';
}
    return 0;
}
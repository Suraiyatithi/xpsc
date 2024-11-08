#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int v=arr[i];
        if(mp[v]!=0){
            ans++;
            while(mp[v]>0){
                mp[v]--;
                v++;
            }
        }
    }
    cout<<ans<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n][n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>arr[i][j];
        }
    }
    map<int,int>mp;
    map<int,int>cnt;
    for(int i=0;i<n;i++){
        cnt[arr[i][n-2]]++;
        mp[arr[i][n-2]]=i;
    }
    int in,val;
    for(auto[k,v]:cnt){
        if(v==1) in=k;
        else val=k;
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[mp[in]][i]<<" ";
    }
    cout<<val<<'\n';
}
    return 0;
}
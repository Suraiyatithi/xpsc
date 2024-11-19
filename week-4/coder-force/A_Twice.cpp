#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>cnt;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    int pair=0;
    for(auto[k,v]:cnt){
        pair+=v/2;
        
    }
    cout<<pair<<'\n';
}
    return 0;
}
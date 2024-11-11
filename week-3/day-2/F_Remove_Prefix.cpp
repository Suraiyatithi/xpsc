#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int i=n-1;i>=0;i--){
        if(mp[v[i]]>0){
            break;
        }
        mp[v[i]]++;
    }
    cout<<n-mp.size()<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>temp=v;
    sort(temp.begin(),temp.end());
    map<int,set<int>>m;
    for(int i=0;i<n;i++){
        m[i%k].insert(v[i]);
    }
    for(int i=0;i<n;i++){
        auto c=m[i%k];
        if(c.find(temp[i])==c.end()){
            mp[i%k]++;
        }
    }
    if(mp.size()==0){
        cout<<0<<'\n';
        continue;
    }
    int count=0;
    for(auto x:mp){
        if(x.second==1){
            count++;
        }
        else{
            count+=100;
        }
    }
    if(count==2) cout<<1<<'\n';
    else cout<<-1<<'\n';
}
    return 0;
}
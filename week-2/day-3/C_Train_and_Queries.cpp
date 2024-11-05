#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
 map<int,pair<int,int>>p;
 for(int i=0;i<n;i++){
    if(p.find(v[i])==p.end()){
        p[v[i]]={i,i};
    }
    else{
        p[v[i]].second=i;
    }
 }
    while(k--){
        int s,d;
        cin>>s>>d;
        bool found=false;
     if(p.find(s)!=p.end() && p.find(d)!=p.end()){
        if(p[s].first<=p[d].second){
             found=true;
        }
     }
     if(found) cout<<"YES"<<'\n';
     else cout<<"NO"<<'\n';
    
    }
}
    return 0;
}

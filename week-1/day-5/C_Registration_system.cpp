
#include<bits/stdc++.h>
using namespace std;
int main(){
       ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
vector<string>v;
unordered_map<string,int>mp;
//map<string,int>mp;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(mp[s]==0){
        v.push_back("OK");
    }
    else{
        string r=s+to_string(mp[s]);
        v.push_back(r);
    }
    mp[s]++;
}
for(auto x:v){
    cout<<x<<'\n';
}
    return 0;
}
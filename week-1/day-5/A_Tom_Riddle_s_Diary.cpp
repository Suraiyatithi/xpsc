#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
unordered_map<string,int>mp;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(mp[s]==0){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
    mp[s]++;
}
    return 0;
}
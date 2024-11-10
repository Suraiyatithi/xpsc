#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<string>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
unordered_map<string,int>cnt;
for(int i=0;i<n;i++){
  cnt[v[i]]++;
}
vector<char>x;
for(int i=n-1;i>=0;i--){
    if(cnt[v[i]]>0){
        cnt[v[i]]=0;
        string s=v[i];
        int sz=s.size();
x.push_back(s[sz-2]);
x.push_back(s[sz-1]);
    }
}
for(int i=0;i<x.size();i++){
    cout<<x[i];
}
cout<<'\n';
    return 0;
}
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
    string s;
    cin>>s;
  map<char,int>mp;

  for(int i=0;i<n;i++){
    mp[s[i]]++;
  }
  vector<char>v;
  for(auto[x,y]:mp){
    v.push_back(x);
  }
  
  int m=v.size();
  vector<char>r;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(s[i]==v[j]){
  
              r.push_back(v[m-j-1]);
  }
        }
    
}
for(int i=0;i<r.size();i++){
    cout<<r[i];
}
cout<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
vector<string>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

reverse(v.begin(),v.end());
unordered_set<string>s;
vector<string>v2;
  
for(const auto&str:v){
    if(s.insert(str).second){
        v2.push_back(str);
    }
 }
for(const auto& str:v2){
    cout<<str<<'\n';
}

    return 0;
}
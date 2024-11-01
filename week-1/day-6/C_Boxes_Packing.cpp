#include<bits/stdc++.h>
using namespace std;
int main(){
           ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
map<int,int>cnt;
for(int i=0;i<n;i++){
    cnt[v[i]]++;
}
int max_count=0;
for(auto[k,v]:cnt){
    max_count=max(max_count,v);
}
cout<<max_count<<'\n';
    return 0;
}
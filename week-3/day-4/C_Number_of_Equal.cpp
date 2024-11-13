#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<int>a(n);
vector<int>b(m);
map<int,int>cnt;
for(int i=0;i<n;i++){
    cin>>a[i];
    cnt[a[i]]++;
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
vector<int>v;
for(int i=0;i<m;i++){
if(cnt[b[i]]){
    int x=cnt[b[i]];
v.push_back(x);
}
}
long long int sum=0;
for(int i=0;i<v.size();i++){
    sum+=v[i];
}
cout<<sum<<'\n';
    return 0;
}
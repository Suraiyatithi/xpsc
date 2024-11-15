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
    cnt[b[i]]++;
}
for(auto[k,v]:cnt){
    for(int i=0;i<v;i++){
        cout<<k<<" ";
    }
}
cout<<'\n';

    return 0;
}
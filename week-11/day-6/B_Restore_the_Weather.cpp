#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<int>b(n);
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    vector<int>c(n);
  for(int i=0;i<n;i++){
c[a[i].second]=b[i];
  }
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
    cout<<'\n';
}
    return 0;
}
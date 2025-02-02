
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==k){
        vector<int>b;
        for(int i=0;i<n;i+=2){
b.push_back(a[i]);
        }
        b.push_back(0);
        for(int i=0;i<b.size();i++){
if(b[i]!=i+1) {
    cout<<i+1<<'\n';
    break;
}
        }
    }
else{
        vector<int>b;
        for(int i=0;i<n-k;i+=2){
b.push_back(a[i]);
        }
        b.push_back(0);
        int cost2;
        for(int i=0;i<b.size();i++){
if(b[i]!=i+1) {
cost2=i+1;
    break;
}
        }
    vector<int>c;
    for(int i=n-k+1;i<n;i+=2){
   c.push_back(a[i]);
}
c.push_back(0);
int cost;
  for(int i=0;i<c.size();i++){
if(c[i]!=i+1) {
   cost=i+1;
    break;
}
        }
  int res=min(cost,cost2);
  cout<<res<<'\n';      

}
}
    return 0;
}


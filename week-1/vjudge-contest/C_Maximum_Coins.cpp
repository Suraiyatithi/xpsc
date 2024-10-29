#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
 
  int n,x;
  cin>>n>>x;
  vector<long long int>v;
  for(int i=1;i<=n;i++){
    v.push_back(pow(2*1.0,i));
  }
  sort(v.begin(),v.end());
  long long mx=0;
  for(int i=0;i<x;i++){
    mx+=v[i];
  }
cout<<mx<<'\n';
}
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    map<int,int>cnt;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    vector<int>v;
    for(auto[x,y]:cnt){
        if(y>=k){
v.push_back(x);
        }
    }
  if(v.empty()){
    cout<<-1<<'\n';
    continue;
  }
  int l=v[0],r=v[0];
  int max_l=l,max_r=r;
  int cur_l=l,prev=l;
  for(int i=1;i<v.size();i++){
    if(v[i]==prev+1){
r=v[i];
    }
    else{
        if(r-l>max_r-max_l){
            max_l=l;
            max_r=r;
        }
        l=v[i];
        r=v[i];
    }
    prev=v[i];
  }
     if (r - l > max_r - max_l) {
            max_l = l;
            max_r = r;
        }
  cout<<max_l<<" "<<max_r<<'\n';

}
    return 0;
}


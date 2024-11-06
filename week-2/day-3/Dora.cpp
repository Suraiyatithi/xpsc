#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
int j=n;
int l,r;
bool found=false;
for(int i=1;i<=n/2;i++){
    if(v[i]!=1 && v[i]!=n && v[j]!=1 && v[j]!=n){
        found=true;
        l=i;
        r=j;
        break;
    }
    j--;
}

  if(found && r!=v[1] && r!=v[n] && l!=v[1] && l!=v[n])cout<<l<<" "<<r<<'\n';
  else cout<<-1<<'\n';
}
    return 0;
}
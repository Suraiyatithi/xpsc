#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    bool ok=false;
    for(int i=0;i<n;i++){
        a[i]=a[i]-1;
    }
    for(int i=0;i<n;i++){
      if(a[a[i]]==i &&a[i]!=i){
        ok=true;
        break;
      }
    }
    if(ok) cout<<2<<'\n';
    else{
        cout<<3<<'\n';
    }
}
    return 0;
}
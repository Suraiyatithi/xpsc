#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    vector<long long>a(n);
    vector<long long>v(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      for(int i=0;i<q;i++){
       cin>>v[i];
    }
    set<long long>hs;
    for(int i=0;i<q;i++){
if(hs.count(v[i])) continue;
hs.insert(v[i]);
        for(int j=0;j<n;j++){
            if(a[j]%(1<<v[i])==0){
                a[j]+=(1<<(v[i]-1));
            }
        }
    }
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<'\n';
}
    return 0;
}
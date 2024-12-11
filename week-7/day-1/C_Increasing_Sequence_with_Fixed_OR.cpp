#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   long long int n;
    cin>>n;
    deque<long long>ans;
    for(int k=0;k<=__lg(n);k++){
        if((n>>k)&1){
            long long val=n-(1LL<<k);
                if(val>0) ans.push_front(val);
            
        }
    }
    ans.push_back(n);
    cout<<ans.size()<<'\n';
for(auto i:ans){
    cout<<i<<" ";
}
cout<<'\n';
}
    return 0;
}
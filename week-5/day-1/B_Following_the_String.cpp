#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    map<char,int>cnt;
   for(int i=0;i<26;i++){
    cnt['a'+i]=0;
   }
   for(int i=0;i<n;i++){
    cin>>a[i];
    for(auto[k,val]:cnt){
        if(val==a[i]){
            cout<<k;
            cnt[k]++;
            break;
        }
    }
   }
    cout<<'\n';
    
}
    return 0;
}

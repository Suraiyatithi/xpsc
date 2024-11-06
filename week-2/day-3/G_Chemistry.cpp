#include<bits/stdc++.h>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>cnt;
    for(int i=0;i<n;i++){
        cnt[s[i]]++;
    }
   int odd_count=0;
    for(auto[x,y]:cnt){
        if(y%2!=0){
            odd_count++;
        }

    }
int r=max(0,odd_count-1);
if(r<=k){
    cout<<"YES"<<'\n';
}
else{
    cout<<"NO"<<'\n';
}
    
}
    return 0;
}

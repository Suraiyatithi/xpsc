#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s,k;
    cin>>s>>k;
    if (s.find(k) != string::npos) {
 cout<<0<<'\n';
    } 
    else{
      int ans=INT_MAX;
        for(int i=0;i<=n-m;i++){
              int l=0;
           for(int j=0;j<m;j++){
             if(s[i+j]<=k[j]){
int r=k[j]-s[i+j];
int z=9-k[j]+s[i+j]+1;
                int y=min(r,z);
                l+=y;
            }
            else{
                int r=s[i+j]-k[j];
                int z=9-s[i+j]+k[j]+1;
                int y=min(r,z);
                l+=y;
            }

           }
           
           ans=min(ans,l);
        }
        cout<<ans<<'\n';
    }
}
    return 0;
}


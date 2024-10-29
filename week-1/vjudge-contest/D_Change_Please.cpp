#include<bits/stdc++.h>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int y=100-x;
    if(y>9){
int i=y/10;
int ans=i*10;
cout<<ans<<'\n';
    }
    else{
        cout<<0<<'\n';
    }
}
    return 0;
}
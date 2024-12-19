#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    int mn=abs(k-2*(1+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int p=2*(i+j);
            mn=min(mn,abs(k-p));
        }
    }
    cout<<mn<<'\n';
}
    return 0;
}
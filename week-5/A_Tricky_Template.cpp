#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    bool find=false;
    for(int i=0;i<n;i++){
if(a[i]!=c[i] && b[i]!=c[i]){
    find=true;
    break;
}
    }
    if(find) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}
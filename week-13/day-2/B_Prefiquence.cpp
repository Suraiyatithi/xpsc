#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int j=0;
    int count=0;
    for(int i=0;i<m;i++){
if(b[i]==a[j] && j<n){
    count++;
    j++;
}
    }
    cout<<count<<'\n';
}
    return 0;
}
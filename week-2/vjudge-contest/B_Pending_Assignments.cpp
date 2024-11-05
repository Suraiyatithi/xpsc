#include<bits/stdc++.h>
using namespace std;
int main(){
       ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    long long int r=x*y;
    long long int s=z*1440;
    if(r<=s){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
}
    return 0;
}
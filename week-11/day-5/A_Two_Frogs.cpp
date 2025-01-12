#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+1==b){
         cout<<"NO"<<'\n';
         continue;}

         if(abs(b-a-1)%2==1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    
}
    return 0;
}


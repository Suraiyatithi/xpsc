#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   long long int a,b,n,s;
    cin>>a>>b>>n>>s;
    long long int with_a=a*n;
    if(s==with_a || s==b || s==with_a + b){
        cout<<"YES"<<'\n';
    }
    else if(s>with_a){
        long long int r=s-with_a;
        if(b>=r){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    else if(with_a>s){
long long  int r=s%n;
if(r<=b) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
    }
   else{
    cout<<"NO"<<'\n';
   }
    
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
        while(n>0){
            cout<<"AA"<<"C";
            n-=2;
        }
        cout<<'\n';
    }
}
    return 0;
}
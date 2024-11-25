#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    long long int cost=0;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        if(x*v >y){
            cost+=y;
        }
        else{
            cost+=(x*v);
        }
    }
    cout<<cost<<'\n';
}
    return 0;
}
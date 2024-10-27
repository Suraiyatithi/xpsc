#include<bits/stdc++.h>
using namespace std;
int main(){
       ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int a,b;
cin>>a>>b;
if(a==b){
    cout<<a+b<<'\n';
}
else{
    int x=max(a,b);
int ans=x+(x-1);
cout<<ans<<'\n';
}
    return 0;
}
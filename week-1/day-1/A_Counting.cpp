#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int x,y;
cin>>x>>y;
if(x>y){
    cout<<0<<'\n';
}
else{
    int ans=(y-x)+1;
cout<<ans<<'\n';
}
    return 0;
}
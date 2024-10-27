#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int a,b,t;
cin>>a>>b>>t;
if(t<a){
    cout<<0<<'\n';
}
else{
    int x=(t/a)*b;
    cout<<x<<'\n';

}
    return 0;
}
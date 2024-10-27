#include<bits/stdc++.h>
using namespace std;
int main(){
         ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
string s;
cin>>s;
int x=s.size();
if(x==4){
    cout<<s<<'\n';
}
else if (x==3){
    string ans="0"+s;
    cout<<ans<<'\n';
}
else if(x==2){
    string ans="00"+s;
    cout<<ans<<'\n';
}
else if(x==1){
     string ans="000"+s;
    cout<<ans<<'\n';
}
else{
    cout<<0000<<'\n';
}
    return 0;
}
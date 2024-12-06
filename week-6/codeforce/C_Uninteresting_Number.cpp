#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
         int num = stoll(s);
        if(num%9==0){
            pos=true;
            break;
        }
        int d = c - '0'; 
        if(d==2 || d==3){
            d=d*d;
        }
        s[i]=d;
        int num = stoll(s);
        if(num%9==0){
            pos=true;
            break;
        }
    }
    if(pos) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int o;
    cin>>o;
    string s;
    cin>>s;
    bool flag=false;
    int sz=s.size();
    for(int i=0;i<sz/2;i++){
        if(s[i]==s[sz-i-1]) continue;
        else if(s[i]>s[sz-i-1]){
            flag=true;
        }
        else{
            break;
        }
    }
    if(flag){
        string s2=s;
    reverse(s2.begin(),s2.end());
    s2=s2+s;
    cout<<s2<<'\n';
    }
    else{
        cout<<s<<'\n';
    }
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    string t;
    for(int i=0;i<s.size();i++){
        if(s[i]=='p'){
          t+='q';
        }
        else if( s[i]=='q'){
           t+='p';
        }
        else if(s[i]=='w'){
            t+='w';
        }
    }
    reverse(t.begin(),t.end());
    cout<<t<<'\n';
}
    return 0;
}
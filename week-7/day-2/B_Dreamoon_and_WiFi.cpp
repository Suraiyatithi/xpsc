#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
int ps1=0;
int ps2=0;
int uns2=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='+'){
        ps1++;
    }
    if(t[i]=='+'){
        ps2++;
    }
    if(t[i]=='?'){
        uns2++;
    }
}
int count=0;
for(int i=0;i<(1<<uns2);i++)
{
    if(__builtin_popcount(i)+ps2==ps1){
        count++;
    }
}
cout<<fixed<<setprecision(12)<<(double)count/(1<<uns2)<<'\n';
    return 0;
}
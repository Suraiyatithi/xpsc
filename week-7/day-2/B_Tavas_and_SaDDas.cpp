#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int l=s.size();
long long ans=0;
for(int i=0;i<l;i++){
    if(s[i]=='7'){
        ans+=pow(2,(l-i-1));
    }
    else{
        ans+=0;
    }
}
long long sum=0;
for(int i=0;i<l;i++){
    sum+=pow(2,i);
}
cout<<sum+ans<<'\n';
    return 0;
}
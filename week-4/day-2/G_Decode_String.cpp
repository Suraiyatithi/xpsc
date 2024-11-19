#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   string v;
   cin>>v;
    string s;
    int i=n-1;
  while(i>=0){
if(v[i]=='0'){
    int r=(v[i-2]-'0')*10+(v[i-1]-'0');
    s+=('a'+r-1);
    i-=3;
}
else{
    int r=v[i]-'0';
      s+=('a'+r-1);
    i--;
}
  }
  reverse(s.begin(),s.end());
  cout<<s<<'\n';
}
    return 0;
}


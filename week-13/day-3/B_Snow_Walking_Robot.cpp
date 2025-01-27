#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int l=0,r=0,u=0,d=0;
    for(int i=0;i<s.size();i++){
if(s[i]=='U') u++;
if(s[i]=='D') d++;
if(s[i]=='L') l++;
if(s[i]=='R') r++;
    }
    int n=min(u,d);
    int m=min(l,r);
  if(n==0 && m!=0){
    cout<<2<<'\n';
    cout<<'L'<<'R';
  }
  else if(m==0 && n!=0){
    cout<<2<<'\n';
    cout<<'U'<<'D';
  }
  else{
      cout<<(2*n)+(2*m)<<'\n';
        for(int i=0;i<m;i++){
        cout<<'L';
    }
      for(int i=0;i<n;i++){
        cout<<'U';
    }
     for(int i=0;i<m;i++){
        cout<<'R';
    }
      for(int i=0;i<n;i++){
        cout<<'D';
    }
  
  }
    cout<<'\n';
}
    return 0;
}
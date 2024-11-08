#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    char x;
    cin>>n>>x;
    string s;
    cin>>s;
s+=s;
  bool found=false;
      int result=0;
      int cnt=0;
      if(x=='g'){
        cout<<0<<'\n';
        continue;
      }
      for(int i=0;i<s.size();i++){
        if(s[i]=='g'){
            result=max(result,cnt);
            found=false;
        }
        if(s[i]==x && found==false){
found=true;
cnt=0;
        }
      if(found)cnt++;
      }
cout<<result<<'\n';
    
}
    return 0;
}

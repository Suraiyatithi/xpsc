#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    int in;
    vector<char>v;
    if(s.size()==1){
        v.push_back(s[0]);
       if(v[0]=='z'){
        v.push_back('x');
       }
       else{
        v.push_back('z');
       }
    }
   else{
    bool found =false;
     for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
   if(s[i]==s[i+1]){
in=i+1;
found=true;
if(s[i]!='x'){
    v.push_back('x');
}
else{
    v.push_back('y');
}
break;
   }

    }
       if(!found){
   if(v.back()!='z'){
     v.push_back('z');
   }
   else{
     v.push_back('x');
   }
   }
    else{
        for(int i=in;i<s.size();i++){
        v.push_back(s[i]);
    }
    }
  
   }
     for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<'\n';
}
    return 0;
}

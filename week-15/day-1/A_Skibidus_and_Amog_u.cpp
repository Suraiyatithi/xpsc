#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s.size()<=2){
        cout<<'i'<<'\n';
    }
    else{
        for(int i=0;i<s.size()-2;i++){
cout<<s[i];
        }
        cout<<'i'<<'\n';
    }
}
    return 0;
}
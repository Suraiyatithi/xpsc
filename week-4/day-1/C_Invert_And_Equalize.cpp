#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool zero_found=false;
    int zero=0;
        bool one_found=false;
    int one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && zero_found==false){
            zero++;
            zero_found=true;
        }
        else if(s[i]!='0'){
            zero_found=false;
        }
    }
   
    for(int i=0;i<n;i++){
        if(s[i]=='1' && one_found==false){
            one++;
            one_found=true;
        }
        else if(s[i]!='1'){
            one_found=false;
        }
    }
 cout<<min(zero,one)<<'\n';
}
    return 0;
}


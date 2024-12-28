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
    bool isvalid=true;
    bool p_found=false;
    for(int i=0;i<n-1;i++){
        if(s[i]=='p' && s[i+1]=='s' && i+1!=n-1){
                isvalid=false;
                break;
            
         
        }
         else if(s[i]=='s' && s[i+1]=='p' && i+1!=n-1){
                isvalid=false;
                break;
            
         
        }

    }
    if(isvalid) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}


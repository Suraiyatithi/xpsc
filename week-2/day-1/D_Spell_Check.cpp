#include<bits/stdc++.h>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n!=5){
        cout<<"NO"<<'\n';
    }
    else{
        int t=0;
        int i=0;
        int m=0;
        int u=0;
        int r=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='T'){
                t++;
            }
            else if(s[j]=='i'){
                i++;
            }
            else if(s[j]=='m'){
                m++;
            }
              else if(s[j]=='u'){
                u++;
            }
              else if(s[j]=='r'){
                r++;
            }
        }
        if(t==1 && i==1 && m==1 && u==1 && r==1){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}
    return 0;
}
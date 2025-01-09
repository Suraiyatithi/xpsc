#include<bits/stdc++.h>
using namespace std;
void prefix(const string &s,vector<int>&p,vector<int>&p_inv){
    int one=0,inv=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') one++;
        else inv +=one;
        p[i]=one;
        p_inv[i]=inv;
    }
}
int main(){
int t;
cin>>t;
while(t--){
    int n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    vector<int>p(n),p_inv(n);
    prefix(s,p,p_inv);
    int op=0;
    int start=0;
    while(start<n){
        bool found=false;
        for(int i=n-1;i>=start;i--){
            int one=p[i]-(start>0 ? p[start-1]:0);
            int inv=p_inv[i]-(start>0 ? p_inv[start-1]:0);
            if(inv<=x && inv %k==0){
                op++;
                start=i+1;
                found=true;
                break;
            }
        }
        if(!found){
            start++;
        }
    }
    cout<<op<<'\n';
}
    return 0;
}


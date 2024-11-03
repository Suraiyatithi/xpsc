#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
     
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int q;
    cin>>q;
    unordered_set<int>p;
    for(int i=0;i+3<s.size();i++){
        if(s.substr(i,4)=="1100"){
            p.insert(i);
        }
    }
     
    while(q--){
        int i,v;
        cin>>i>>v;
        i--;
             

            for(int j=max(0,i-3);j<=min((int)s.size()-4,i);++j){
                if(s.substr(j,4)=="1100"){
                    p.erase(j);
                }
            }
        s[i]='0'+v;
    
            for(int j=max(0,i-3);j<=min((int)s.size()-4,i);++j){
                if(s.substr(j,4)=="1100"){
                    p.insert(j);
                }
            }


            cout<<(p.empty()?"NO":"YES")<<'\n';

    }
}
    return 0;
}

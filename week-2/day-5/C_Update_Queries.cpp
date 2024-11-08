#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    set<int>p;
    string s;
    cin>>s;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        p.insert(x);
    }
 string u;
 cin>>u;
 sort(u.begin(),u.end());
 int i=0;
for(auto it:p){
s[it-1]=u[i];
i++;
}
cout<<s<<'\n';

}
    return 0;
}
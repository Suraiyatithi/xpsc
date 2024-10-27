#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
string s;
cin>>s;
int cnt[26]={0};
int n=s.size();
for(int i=0;i<n;i++){
    cnt[s[i]-'a']++;

}
bool found=false;
char ans;
for(int i=0;i<26;i++){
    if(cnt[i]==0){
       found=true;
       ans=i+'a';
        break;
    }
}

if(found) cout<<ans<<'\n';
else{
    cout<<"None"<<'\n';
}
    return 0;
}
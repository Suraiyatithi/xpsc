#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int q;
cin>>q;
while(q--){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int low=0;
    int up=0;
    vector<char>v;
    for(int i=0;i<s.size();i++){
if(s[i]=='b'){
    low++;
}
else if(s[i]=='B'){
    up++;
}
else{
    if(low>0 && islower(s[i]))
    {
        low--;
        continue;

    }
    else if(up>0 && isupper(s[i])){
        up--;
        continue;
    }
    v.push_back(s[i]);
}
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<'\n';
}
    return 0;
}
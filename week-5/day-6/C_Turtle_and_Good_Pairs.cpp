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
    map<char,int>cnt;
    for(int i=0;i<n;i++){
        cnt[s[i]]++;
    }
      vector<pair<char, int>> freq(cnt.begin(), cnt.end());
        sort(freq.begin(), freq.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; 
        });
    string ans(n,' ');
    int index=0;
    for(auto[k,v]:freq){
        for(int i=0;i<v;i++){
            if(index>=n) {
                index=1;
            }
            ans[index]=k;
            index+=2;
        }
    }
    cout<<ans<<'\n';
}
    return 0;
}
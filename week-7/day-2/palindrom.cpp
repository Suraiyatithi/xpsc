#include<bits/stdc++.h>
using namespace std;
const int maxN=(1LL << 15);

bool isPalindrom(int x){
    string s=tostring(x);
    int len=s.size();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            return false;
        }

    }
    return true;
}
vector<int>all;
void markPalindrom(){
    for(int i=0;i<maxN;i++){
        if(isPalindrom(i)){
            all.push_back(i);
        }
    }
}
int main(){
markPalindrom();
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>cnt(maxN+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    long long ans=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<all.size();j++){
            int cur=(a[i]^all[j]);
            ans+=cnt[cur];
        }
    }
    cout<<ans/2<<'\n';
}
    return 0;
}
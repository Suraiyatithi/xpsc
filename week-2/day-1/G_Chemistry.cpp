#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>cnt;
    for(int i=0;i<n;i++){
        cnt[s[i]]++;
    }
    int count=0;
    int total_odd=0;
    for(auto[x,y]:cnt){
        if(y%2!=0){
            count++;
total_odd=total_odd+y;
        }
    }
}
    return 0;
}
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
    vector<int>odd;
    for(auto[x,y]:cnt){
        if(y%2!=0){
            odd.push_back(y);
        }

    }
        if(odd.empty()){
cout<<"YES"<<'\n';
    }
else{
    sort(odd.begin(),odd.end());
    long long int sum=0;
    for(int i=0;i<odd.size();i++){
        sum+=odd[i];
     
    }
    int r=sum-k;
    bool possible=false;
    for(int i=0;i<odd.size();i++){
        if(odd[i]==r){
possible=true;
        }
    }
    if(possible || r==0){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
}
    
}
    return 0;
}
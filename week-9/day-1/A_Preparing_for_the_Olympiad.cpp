#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
vector<vector<int>>dp(n+1,vector<int>(2,0));
for(int i=n-1;i>=0;i--){
    dp[i][0]=max(dp[i+1][0],dp[i+1][1]);
    int x=(i+1<n)? b[i+1]:0;
    dp[i][1]=a[i]-x+max(dp[i+1][0],dp[i+1][1]);
}
cout<<max(dp[0][0],dp[0][1])<<'\n';
}
    return 0;
}
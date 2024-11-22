#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector<long long>p_sum(n);
    p_sum[0]=a[0];
    for(int i=1;i<n;i++){
        p_sum[i]=a[i]+p_sum[i-1];
    }
    int l=0,r=n-1;
    long long ans=0;
    while(l<r){
if(s[l]=='L' && s[r]=='R'){
ans += (l > 0) ? (p_sum[r] - p_sum[l - 1]) : p_sum[r];
l++;
r--;
}
else if(s[l]=='L' && s[r]!='R'){
    r--;
}
else if(s[l]!='L' && s[r]=='R'){
    l++;
}
else{
    l++;
    r--;
}
    }
    cout<<ans<<'\n';
}
    return 0;
}

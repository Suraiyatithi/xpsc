#include<bits/stdc++.h>
using namespace std;
const int b=30;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>bits(b+1);
    vector<int>a(n);
    for(int i=0;i<n;i++){
cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=b;j>=0;j--){
            if((a[i]>>j) & 1){
                bits[j]++;
            }
        }
    }
int ans=0;
for(int i=b;i>=0;i--){
    if(bits[i]==n){
        ans+=(1LL << k);
    }
    else{
        int need=n-bits[k];
        if(k>=need){
            ans+=(1LL <<k);
            k-=need;
        }

    }
}
cout<<ans<<'\n';
}
    return 0;
}
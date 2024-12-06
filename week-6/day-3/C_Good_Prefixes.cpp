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
    int mx=INT_MIN;
    int count=0;
    long long sum=0;
    for(int i=0;i<n;i++){
     sum+=a[i];
     mx=max(mx,a[i]);
     if(sum-mx==mx) count++;
    }
    cout<<count<<'\n';
}
    return 0;
}



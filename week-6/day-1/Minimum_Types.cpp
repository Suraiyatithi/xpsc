#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    vector<long long>b(n);
    vector<long long>c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        long long x=b[i]*a[i];
        c.push_back(x);
    }
    sort(c.rbegin(),c.rend());
    long long count=0;
long long sum=0;
    for(int i=0;i<n;i++){
        sum+=c[i];
        count++;
        if(sum>=k){
break;
        }

    }
    if(sum<k) cout<<-1<<'\n';
    else cout<<count<<'\n';
}
    return 0;
}
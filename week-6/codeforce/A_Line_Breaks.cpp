#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
       a[i]=x.size();
    }
    int i=0;
    int ans=0;
    while(m>0 && i<n){
        if(a[i]>m){
            break;
        }
else{
    ans++;
m-=a[i];
i++;
}
    }
    cout<<ans<<'\n';
}
    return 0;
}


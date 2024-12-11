#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;

int main(){
int t;
cin>>t;
while(t--){
    int n,l,r;
    cin>>n>>l>>r;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool ok=true;
    long long p=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            long long x_or=a[i]^a[j];
            p=(p*x_or)%MOD;
            if(p>r) {
                ok=false;
                break;
            }
        }
    }
    if(!ok) cout<<"NO"<<'\n';
    else{
        if(l<=p && p<=r){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}
    return 0;
}
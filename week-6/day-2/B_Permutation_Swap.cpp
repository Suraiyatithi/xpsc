#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
ans=gcd(ans,abs(a[i]-i));
    }
    cout<<ans<<'\n';
}
    return 0;
}
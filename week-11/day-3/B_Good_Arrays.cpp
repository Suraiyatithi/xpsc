#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   long long a=0,b=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1) a+=2;
        else a++;
        b+=x;
    }
    if(n==1) {
        cout<<"NO"<<'\n';
       continue;
    }
    if(a<=b) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}

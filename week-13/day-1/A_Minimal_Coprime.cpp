#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
 vector<long long>ans;
while(t--){
    long long l,r;
    cin>>l>>r;
if(r==1 && l==1){
    cout<<1<<'\n';
    continue;
}
cout<<r-l<<'\n';
}

    return 0;
}




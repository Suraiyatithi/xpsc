
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
    map<int,int>x;
    map<int,int>y;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x[a[i]]++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        y[b[i]]++;
    }
   
    if(x.size()+y.size()>=4) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}
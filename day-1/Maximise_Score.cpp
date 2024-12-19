Share


You said:
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n-1;i++){
        int x=abs(a[i+1]-a[i]);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<'\n';
}
    return 0;
}
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
    int sum=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]-i>=0){
            sum+=a[i]-i;
        }
    }
    cout<<sum<<'\n';
}
    return 0;
}
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
    int sum=a[0];
     
    for(int i=1;i<n;i++){
        sum=sum & a[i];
    }
cout<<sum<<'\n';
}
    return 0;
}
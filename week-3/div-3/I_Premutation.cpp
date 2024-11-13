#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n][n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>arr[i][j];
        }
    }
 for(int i=1;i<=n;i++){
    cout<<i<<" ";
 }
 cout<<'\n';
}
    return 0;
}
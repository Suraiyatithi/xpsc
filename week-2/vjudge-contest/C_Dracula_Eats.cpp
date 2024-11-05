#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
if(n<2){
    cout<<0<<'\n';
}
else{
    int r=n-2;
    int days=(r/7)+1;
cout<<days<<'\n';
  
}
}
    return 0;
}
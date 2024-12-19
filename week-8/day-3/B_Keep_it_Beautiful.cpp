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
    vector<int>v(n);
    v[0]=1;
  int j=0;
  int val=a[0];
    for(int i=1;i<n;i++){
       if(j==0 && a[i-1]<=a[i]) {
        v[i]=1;
       }
       else if(j==1 && a[i]>=val && a[i]<=a[0]){
          v[i]=1;
            val=a[i];
        }
      
      else if(a[i-1]>a[i] &&j==0){
       v[i]=1;
        val=a[i];
        j=1;
       }
       else {
v[i]=0;
       }
    }
    for(int i=0;i<n;i++){
      cout<<v[i];
    }
    cout<<'\n';
}
    return 0;
}
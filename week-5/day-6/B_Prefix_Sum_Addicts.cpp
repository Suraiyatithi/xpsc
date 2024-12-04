#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    if(n==1 && k==1){
        cout<<"Yes"<<'\n';
        continue;
    }
    vector<int>v(k);
     v[0]=a[0];
    for(int i=k-1;i>0;i--){
        int x=a[i]-a[i-1];
       v[i]=x;
    }
   
    bool possible=true;
  if(n==k){
      for(int i=0;i<k-1;i++){
        if(v[i]>v[i+1]){
            possible=false;
            break;
        }
    }
  }
  else if( k<n){
        vector<int>v2(n);
        int y=v[0];
        for(int i=1;i<n-k+1;i++){
            int x=v[1];
  v2[i]=x;
             y-=v[1];
        }
        v2[0]=y;
        int j=1;
        for(int i=n-k+1;i<n;i++){
            v2[i]=v[j];
            j++;
        }

for(int i=0;i<v2.size();i++){
    cout<<v[i]<<" ";
  
    // if(v2[i]>v[i+1]){
    //     possible=false;
    //     break;
    // }
}
    }
    if(possible) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';

}
    return 0;
}
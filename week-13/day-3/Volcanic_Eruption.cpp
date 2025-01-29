#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,p;
    cin>>n>>p;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    int t=1;
    int x=p;
    bool ok=true;
   while(ok){
   ok=false;
     for(int i=j;i<n;i++){
        if(a[i]==0) {
            cout<<0<<" ";
            continue;
        }
        if(x>=a[i]){
            cout<<t<<" ";
        }
        else if(x<a[i]){
         j=i;
            x+=p;
            t++;
            ok=true;
            break;
            
        }
    }
   }
   cout<<'\n';
}
    return 0;
}


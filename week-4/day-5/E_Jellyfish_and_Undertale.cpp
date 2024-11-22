#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>ar(c);
    for(int i=0;i<c;i++){
    cin>>ar[i];
    }
    long long ans=b-1;

   int t=1;
   for(int i=0;i<c;i++){
    if(i==c-1 && t==1){
        if(t+ar[i]>a){
            ans+=a;
            break;
        }
        else{
            ans+=t+ar[i];
            break;
        }
    }
    else if(t==1){
       if((t+ar[i])>=a){
         ans+=a-1;
         t=1;
       }
       else{
ans+=(t+ar[i])-1;
t=1;
       }

    }

   }
    cout<<ans<<'\n';
}
    return 0;
}



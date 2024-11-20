#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
long long s;
cin>>n>>s;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int l=0,r=0;
long long sum=0;
int ans=INT_MAX;
while(r<n){
    sum+=a[r];
    if(sum>=s){
      
     while(sum>=s){
          ans=min(ans,r-l+1);
        sum-=a[l];
        l++;
     }
     
    }
 r++;
}
if(ans==INT_MAX){
    cout<<-1<<'\n';
}
else{
    cout<<ans<<'\n';
}
    return 0;
}

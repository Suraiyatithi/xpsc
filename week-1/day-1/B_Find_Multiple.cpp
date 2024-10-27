#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int a,b,c;
cin>>a>>b>>c;
bool found=false;
int ans;
for(int i=a;i<=b;i++){
    if(i%c==0){
        found=true;
        ans=i;
        break;
    }
}
if(found) cout<<ans<<'\n';
else cout<<-1<<'\n';
    return 0;
}
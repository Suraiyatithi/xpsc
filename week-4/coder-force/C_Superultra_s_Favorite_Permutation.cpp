#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x){
    if(x<2) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
  if(n<=3) {
    cout<<-1<<'\n';
    continue;
  }
  vector<int>odd;
  vector<int>even;
for(int i=1;i<=n;i++){
    if(i%2==0) even.push_back(i);
    else odd.push_back(i);
}
int in=-1;
for(int i=0;i<even.size();i++){
    if(!is_prime(odd.back()+even[i])){
in=i;
break;
    }
}
if(in==-1) cout<<-1<<'\n';
else{
    for(int x:odd) cout<<x<<" ";
    cout<<even[in]<<" ";
    for(int i=0;i<even.size();i++){
        if(i!=in){
            cout<<even[i]<<" ";
        }
    }
    cout<<'\n';
}
}
    return 0;
}




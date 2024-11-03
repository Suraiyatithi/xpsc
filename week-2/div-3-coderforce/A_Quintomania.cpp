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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool found=true;
    for(int i=1;i<n;i++){
        int x=abs(v[i]-v[i-1]);
        if(x!=5 && x!=7){
            found=false;
            break;
        }
    }
    if(found) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}
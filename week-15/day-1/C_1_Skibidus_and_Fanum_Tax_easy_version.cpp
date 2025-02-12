#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b;
    cin>>b;
vector<int>ne(n);
ne[0]=min(a[0],b-a[0]);
bool ok=true;
for(int i=1;i<n;i++){
    int op1=a[i];
    int op2=b-a[i];
    if(op1>=ne[i-1] && op2>=ne[i-1]){
        ne[i]=min(op1,op2);
    }
    else if(op1>=ne[i-1]){
        ne[i]=op1;
    }
    else if(op2>=ne[i-1]){
        ne[i]=op2;
    }
    else{
       ok=false;
       break;
    }
}
if(ok) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}
    return 0;
}




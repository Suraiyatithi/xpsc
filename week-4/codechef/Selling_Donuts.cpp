#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int sad=0;
     for(int i=0;i<m;i++){
        if(a[b[i]-1]>0){
            a[b[i]-1]=a[b[i]-1]-1;
        }
        else{
            sad++;
        }
    }
    cout<<sad<<'\n';
    
}
    return 0;
}
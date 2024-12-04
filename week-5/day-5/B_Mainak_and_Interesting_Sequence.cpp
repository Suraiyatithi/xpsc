#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a;
    if(n>m){
        cout<<"No"<<'\n';
    }
    else if(n%2==0 && m%2==0){
        cout<<"Yes"<<'\n';
        int sum=0;
        for(int i=0;i<n-2;i++){
            cout<<1<<" ";
            sum+=1;
        }
        int x=(m-sum)/2;
        cout<<x<<" "<<x<<'\n';
    }
      else if(n%2==1 && (m%2==0 || m%2==1)){
        cout<<"Yes"<<'\n';
        int sum=0;
        for(int i=0;i<n-1;i++){
            cout<<1<<" ";
            sum+=1;
        }
        int x=(m-sum);
        cout<<x<<'\n';
    }
    else if(n%2==0 && m%2==1){
        cout<<"No"<<'\n';
    }
}
    return 0;
}
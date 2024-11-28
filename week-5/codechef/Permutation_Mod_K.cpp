#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
 vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            int x=i%k;
             v.push_back({i,x});
           
        }
        sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second<b.second;
        });
    
   
  if(n==1 && k==1){
 cout<<-1;
  }
  else{
   
     for(const auto &p:v){
        cout<<p.first<<" ";
    }
  }
    cout<<'\n';
}
    return 0;
}


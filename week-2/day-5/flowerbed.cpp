#include<bits/stdc++.h>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
for(int i=1;i<=t;i++){
   long long int n,d;
   cin>>n>>d;
   vector<long long int>v;
   for(int i=0;i<n;i++){
    long long int a,b;
    cin>>a>>b;
  long long int x=d/a;
   v.push_back(x);
   }
   long long int  total=0;
   for(int j=0;j<v.size();j++){
    total+=v[j];
   }
   cout<<"Case"<<" "<<i<<":"<<" "<<total<<'\n';

}
    return 0;
}



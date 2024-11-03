#include<bits/stdc++.h>
using namespace std;
int main(){
         ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    map<int,long long int>totalCostPerBrand;
    for(int i=0;i<k;i++){
        int b,c;
        cin>>b>>c;
    totalCostPerBrand[b]+=c;
    }
 
    priority_queue<long long int>cost;
    for(const auto&[b,c]:totalCostPerBrand){
        cost.push(c);
    }
   long long int maxTotalCost=0;
    for(int i=0;i<n&&!cost.empty();i++){
maxTotalCost+=cost.top();
cost.pop();
    }
    cout<<maxTotalCost<<'\n';
}
    return 0;
}


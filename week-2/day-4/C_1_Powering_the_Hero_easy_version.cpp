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
    vector<int>v;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=0){
            pq.push(x);
        }
        if(x==0){
       if(!pq.empty()){
             int y=pq.top();
            pq.pop();
            v.push_back(y);
       }
        }
    }
    long long int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum<<'\n';

}
    return 0;
}
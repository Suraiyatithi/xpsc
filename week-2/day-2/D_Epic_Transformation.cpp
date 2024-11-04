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
    vector<int>arr(n);
    map<int,int>cnt;
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
        for(int i=0;i<n;i++){
cnt[arr[i]]++;
}
    priority_queue<int>pq;
       for(auto[k,v]:cnt){
pq.push(v);
    }
     

     
   while(pq.size()>1){
    int first=pq.top();
    pq.pop();
    int second=pq.top();
    pq.pop();
    first--;
    second--;
    if(first>0){
        pq.push(first);
    }
    if(second>0){
        pq.push(second);
    }
   }
   if(pq.empty()) cout<<0<<'\n';
   else cout<<pq.top()<<'\n';

        
}
    return 0;
}



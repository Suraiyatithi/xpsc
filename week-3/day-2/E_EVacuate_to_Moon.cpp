#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m,h;
    cin>>n>>m>>h;
    priority_queue<long long int>c;
    priority_queue<long long int>p;
    for(int i=0;i<n;i++){
       long long int x;
        cin>>x;
        c.push(x);
    }
      for(int i=0;i<m;i++){
        long long int x;
        cin>>x;
        p.push(x);
    }

    // while(!c.empty()){
    //     cout<<c.top()<<" ";
    //     c.pop();
    // }
    // cout<<'\n';
    // while(!p.empty()){
    //     cout<<p.top()<<" ";
    //     p.pop();
    // }
    // cout<<'\n';
    vector<long long int>v;
while(!c.empty() && !p.empty()){
   long long int x=c.top();
    long long int y=p.top()*h;
    if(y>=x){
        v.push_back(x);
    }
    else{
        v.push_back(y);
    }
    c.pop();
    p.pop();
}
long long int sum=0;
for(int i=0;i<v.size();i++){
    sum+=v[i];
}
cout<<sum<<'\n';
}
    return 0;
}
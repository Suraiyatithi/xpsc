#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int q;
cin>>q;
pair<int,int>p;
deque<pair<int,int>>dq;
vector<int>v;
int i=1;
while(q--){
    int x;
    cin>>x;
    if(x==1){
        int m;
        cin>>m;
        p.first=m;
        p.second=i;
        dq.push_back(p);
        i++;
    }
    if(x==2){
if(!dq.empty()){
    pair<int,int>l=dq.front();
    v.push_back(l.second);
    dq.pop_front();
}
    }
    if(x==3){
      if(!dq.empty()){
        int mx=INT_MIN;
        int min_index=INT_MAX;
        auto e=dq.end();
        for(auto it=dq.begin();it!=dq.end();it++){
            if(it->first>mx || it->first==mx && it->second<min_index){
                mx=it->first;
                min_index=it->second;
e=it;
            }
        }
if(e!=dq.end()){
    v.push_back(min_index);
dq.erase(e);
}
      }
    }
}
for(int j=0;j<v.size();j++){
    cout<<v[j]<<" ";
}
cout<<'\n';
    return 0;
}

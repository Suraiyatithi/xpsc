#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    deque<int>v;
    vector<pair<int,int>>st;
    for(int i=1;i<=n;i++){
     v.push_back(i);
    }
while(v.size()>1){
    int a=v.back();
    v.pop_back();
    int b=v.back();
    v.pop_back();
    int r=(a+b+1)/2;
    v.push_back(r);
    st.push_back({a,b});
}


cout<<v[0]<<'\n';
for(int i=0;i<st.size();i++){
    cout<<st[i].first<<" "<<st[i].second<<'\n';
}
}
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>unique(n);
set<int>s;
for(int i=n-1;i>=0;i--){
    s.insert(arr[i]);
    unique[i]=s.size();
}
while(m--){
    int p;
    cin>>p;
    p--;
    cout<<unique[p]<<'\n';

}
    return 0;
}
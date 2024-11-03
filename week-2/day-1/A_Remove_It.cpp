#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

int n,m;
cin>>n>>m;
vector<int>v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x!=m){
        v.push_back(x);
    }

}
if(!v.empty()){
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<'\n';
}
else{
    cout<<" "<<'\n';
}
    return 0;
}
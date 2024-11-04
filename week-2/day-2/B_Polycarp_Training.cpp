#include<bits/stdc++.h>
using namespace std;
int main(){
       ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
sort(v.begin(),v.end());
int days=0;
for(int i=0;i<n;i++){
    if(v[i]>=days+1){
        days++;
    }
}
cout<<days<<'\n';
    return 0;
}
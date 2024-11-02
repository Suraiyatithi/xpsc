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
    vector<int>v(2*n);
for(int i=0;i<2*n;i++){
cin>>v[i];
}
int count_1=0;
int count_0=0;
for(int i=0;i<2*n;i++){
if(v[i]==1){
    count_1++;
}
else{
    count_0++;
}
}
int mn;
int mx;
if(count_0%2==0){
    mn=0;
}
else{
    mn=1;
}

if(count_0>=count_1){
    mx=count_1;
}
else if(count_0==0|| count_1==0){
    mx=0;
}
else{
    mx=count_0;
}
cout<<mn<<" "<<mx<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
long long f=0;
long long e=0;
int j=n-1;
int i=0;
while(i<j){
if(i+1==j){
    if(f<e) f+=v[i]+v[j];
    else e+=v[i]+v[j];
    break;
}
f+=v[i]+v[j];
if(i<j){
    i++;
j--;
e+=v[i]+v[j];
if(i<j){
    j--;
i++;
}
}
}
cout<<abs(e-f)<<'\n';
    return 0;
}
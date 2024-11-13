#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int h,x,y;
    cin>>h>>x>>y;
if(h%2==0){
    int l=h*x;
    int r=(h/2)*y;
    cout<<max(l,r)<<'\n';
}
else{
    int l=h*x;
    int r=x+((h-1)/2)*y;
    cout<<max(l,r)<<'\n';
}
}
    return 0;
}
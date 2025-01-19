
#include<bits/stdc++.h>
using namespace std;
int fibo(int a1,int a2,int a3,int a4,int a5){
    int f=0;
    if(a4==a2+a3) f++;
    if(a5==a3+a4) f++;
    if(a3==a1+a2) f++;
    return f;
}
int main(){
int t;
cin>>t;
while(t--){
    int a1,a2,a4,a5;
    cin>>a1>>a2>>a4>>a5;
    int m=0;
    for(int i=-200;i<=200;i++){
        m=max(m,fibo(a1,a2,i,a4,a5));
    }
    cout<<m<<'\n';
}
    return 0;
}

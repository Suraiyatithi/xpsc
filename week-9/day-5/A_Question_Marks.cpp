#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    for(int i=0;i<4*n;i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='B'){
            b++;
        }
        else if(s[i]=='C'){
            c++;
        }
        else if(s[i]=='D'){
            d++;
        }
    }
    long long sum=0;
    if(a>=n){
sum=sum+n;
    }
    else{
        sum=sum+a;
    }
     if(b>=n){
sum=sum+n;
    }
    else{
        sum=sum+b;
    }
     if(c>=n){
sum=sum+n;
    }
    else{
        sum=sum+c;
    }
     if(d>=n){
sum=sum+n;
    }
    else{
        sum=sum+d;
    }
    cout<<sum<<'\n';
}
    return 0;
}
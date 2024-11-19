#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int one=a-1;
    int two=abs(b-c)+abs(c-1);
    if(one<two){
        cout<<1<<'\n';
    }
    else if(two<one){
        cout<<2<<'\n';
    }
    else{
        cout<<3<<'\n';
    }
}
    return 0;
}
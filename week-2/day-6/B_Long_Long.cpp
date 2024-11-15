#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int n,sum=0,k=0;
    int cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<=0){
            if(x<0) k=1;
        }
        else{
            if(k==1) cnt++;
            k=0;
        }
        if(x<0){
            x*=-1;
        }
        sum+=x;
    }
    if(k==1) cnt++;
    cout<<sum<<" "<<cnt<<'\n';
}
    return 0;
}
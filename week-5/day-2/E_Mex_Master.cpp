#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    int zero_count=0;
    bool one=false;
    bool others=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            zero_count++;
        }
        else if(a[i]==1){
            one=true;
        }
        else if(a[i]>1){
            others=true;
        }

    }
    int x=n-zero_count;
    if(zero_count>x+1){
        if(one==false){
            cout<<1<<'\n';
        }
        else{
            if(others){
                cout<<1<<'\n';
            }
            else{
                cout<<2<<'\n';
            }
        }
    }
    else{
        cout<<0<<'\n';
    }
}
    return 0;
}
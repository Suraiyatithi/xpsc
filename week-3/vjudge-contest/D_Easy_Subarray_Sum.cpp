#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    int positive=0;
    int negative=0;
       for(int i=0;i<n;i++){
     if(v[i]>=0){
        positive++;
     }
     else{
        negative++;
     }
        
    }
    if(negative==n){
        cout<<0<<'\n';
    }
    else{
        cout<<negative<<'\n';
    }

}
    return 0;
}
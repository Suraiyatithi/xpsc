#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int l=1,r=n*n;
    vector<int>v;
   while(l<=r){
v.push_back(l);
l++;
if(r>=l){
    v.push_back(r);
r--;

}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[(i*n)+j]<<" ";
        }
        cout<<'\n';
        i++;
        if(i<n){
 for(int j=0;j<n;j++){
            cout<<v[((i+1)*n)-j-1]<<" ";
        }
        }
        cout<<'\n';
    }
}
    return 0;
}
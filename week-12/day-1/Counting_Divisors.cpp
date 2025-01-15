#include<bits/stdc++.h>
using namespace std;
const int maxN=1e6+9;

int main(){
vector<int>d(maxN);
for(int i=1;i<maxN;i++){
    for(int j=i;j<maxN;j+=i){
       d[j]++;
    }
}
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<d[n]<<'\n';
}
    return 0;

}
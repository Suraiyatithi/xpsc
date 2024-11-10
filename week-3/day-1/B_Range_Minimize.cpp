#include<bits/stdc++.h>
using namespace std;
int main(){
         ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

   long long int l=v[n-1]-v[2];
long long int r=v[n-3]-v[0];
long long int  mn=min(l,r);
long long int m=v[n-2]-v[1];
cout<<min(m,mn)<<'\n';


}
    return 0;
}
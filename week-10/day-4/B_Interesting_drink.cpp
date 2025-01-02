#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int q;
cin>>q;
sort(a.begin(),a.end());
while(q--){
int x;
cin>>x;
int left = upper_bound(a.begin(), a.end(), x)-a.begin();
cout<<left<<'\n';
}
    return 0;
}
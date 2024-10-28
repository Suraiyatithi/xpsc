#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
pair<string,string>p[n];
for(int i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
}
int count=0;
for(int i=0;i<n-1;i++){
 for(int j=i+1;j<n;j++){
       if(p[i].first==p[j].first && p[i].second==p[j].second){
        count++;
        break;
       }
 }
}
cout<<n-count<<'\n';
    return 0;
}
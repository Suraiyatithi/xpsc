#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
long long a,b;
cin>>a>>b;
vector<long long>v;
for(long long i=1;i*i<=a;i++){
    if(a%i==0){
        v.push_back(i);
        if((a/i)!=i){
            v.push_back(a/i);
        }
    }
}
sort(v.begin(),v.end());
if(v.size()>=b){
    cout<<v[b-1]<<'\n';
}
else{
    cout<<-1<<'\n';
}
    return 0;
}

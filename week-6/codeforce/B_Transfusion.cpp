
       


#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n!=0){
        cout<<"NO"<<'\n';
        continue;
    }
    long long x=sum/n;
    bool possible=true;
    vector<long long>v;
    for(int i=1;i<n-1;i++){
        if(a[i-1]<=x){
long long r=x-a[i-1];
v.push_back(x);
a[i+1]=a[i+1]-r;
        }
        else{
long long r=a[i-1]-x;
v.push_back(x);
a[i+1]=a[i+1]+r;
        }
       if(i==n-2){
        v.push_back(a[n-2]);
        v.push_back(a[n-1]);
       }

    }
for(int i=0;i<v.size()-1;i++){
    if(v[i]!=v[i+1]){
        possible=false;
    }

}
if(possible) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}
    return 0;
}






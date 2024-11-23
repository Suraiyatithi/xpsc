#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long m=(n*(n-1))/2;
    map<long long,long long>mp;
    long long a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    long long r=n-1;
    vector<long long>v;
    for(auto it:mp){
        if(r==it.second){
            v.push_back(it.first);
            r--;
        }
        else{
            long long x=r,p=0;
            while(x>0 && it.second!=p){
                p+=(x);
                v.push_back(it.first);
                x--;

            }
            r=x;
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    int x=v.size();
    while(x!=n){
        cout<<1000000000<<" ";
        x++;
    }
    cout<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long>v(n);
    bool odd=false;
    bool even =false;
    long long max_odd=INT_MIN;
    vector<long long>a;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            even=true;
            a.push_back(v[i]);
        }
        else if(v[i]%2!=0){
            odd=true;
            if(v[i]>max_odd){
                max_odd=v[i];
            }
        }
    }
    if(odd==true && even==false){
        cout<<0<<'\n';
    }
    else if(odd==false && even==true){
        cout<<0<<'\n';
    }
    else{
    sort(a.begin(),a.end());
    long long  count=0;
    for(int i=0;i<a.size();i++){
        if(max_odd<a[i]){
            count=a.size()+1;
            break;
        }
        else{
            count++;
            max_odd=max_odd+a[i];

        }
    }
    cout<<count<<'\n';
    }
}
    return 0;
}


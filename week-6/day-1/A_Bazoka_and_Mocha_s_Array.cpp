#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long min=a[0];
    int index=n;
    vector<long long>v;
    v.push_back(a[0]);

    for(int i=1;i<n;i++){
        if(min<=a[i]){
            min=a[i];
            v.push_back(min);
        }
        else{
            index=i;
            break;
        }

    }
    vector<long long>ans(n);
    for(int i=index;i<n;i++){
ans.push_back(a[i]);
    }
    for(int i=0;i<v.size();i++){
        ans.push_back(v[i]);
    }
    if(is_sorted(ans.begin(),ans.end())){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }
}
    return 0;
}
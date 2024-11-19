#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,c;
    cin>>n>>c;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>s;
    for(int i=0;i<n;i++){
        int x=v[i]+i+1;
            s.push_back(x);
        
    }
    sort(s.begin(),s.end());
    int count=0;
    int val=0;
for(int i=0;i<s.size();i++){
    val+=s[i];
if(val>c){
    break;
}

count++;
}
cout<<count<<'\n';
}
    return 0;
}
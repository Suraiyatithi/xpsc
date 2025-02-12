#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>c=b;
for(int i=1;i<m;i++){
rotate(b.begin(),b.begin()+1,b.end());
c=min(c,b);
}

for(int i=0;i<=n-m;i++){
    vector<int>temp=a;
    for(int j=0;j<m;j++){
        temp[i+j]=c[j];
    }
    if(temp<a){
        a=temp;
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<'\n';
}
    return 0;
}


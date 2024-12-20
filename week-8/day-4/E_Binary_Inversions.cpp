#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>z;
    int count=0;
    int one=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            count++;
        }
        if(a[i]==1){
            one++;
        }
            z.push_back(count);
    }
   long long int x=0;
for(int i=0;i<n;i++){
    if(a[i]==1){
x+=z[n-1]-z[i];
    }
}

long long int y=x;
int l=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        y=y-l;
        y+=z[n-1]-z[i];
        break;
    }
    else{
        l++;
    }
}
long long int w=0;
vector<int>u;
int c=0;
 
for(int i=n-1;i>=0;i--){
   
    if(a[i]==1){
      a[i]=0;
      break;
    }
}
   for(int i=0;i<n;i++){
        if(a[i]==0){
            c++;
        }
            u.push_back(c);
    }
for(int i=0;i<n;i++){
    if(a[i]==1){
w+=u[n-1]-u[i];
    }
}
long long int mx=max(x,y);
long long int res=max(mx,w);
    cout<<res<<'\n';
    }
    return 0;
}


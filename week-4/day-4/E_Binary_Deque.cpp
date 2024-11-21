#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];

    }

    if(total==s){
        cout<<0<<'\n';
        continue;
    }
    if(total<s){
        cout<<-1<<'\n';
        continue;
    }
    int l=0,r=0,ans=0;
    int sum=0;
    while(r<n){
        sum+=a[r];
        if(sum==s){
            ans=max(ans,r-l+1);
        }
        else{
            while(sum>s){
                sum-=a[l];
                l++;
            }
        }
        r++;
    }
    cout<<n-ans<<'\n';
    }
    
  
 
 

    return 0;
}


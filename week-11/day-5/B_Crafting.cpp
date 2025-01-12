#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long>a(n),b(n);
    long long int a_sum=0,b_sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a_sum+=a[i];
    }
      for(int i=0;i<n;i++){
        cin>>b[i];
        b_sum+=b[i];
    }
    if(b_sum>a_sum){
        cout<<"NO"<<'\n';
        continue;
    }
    bool possible=true;
    int j=1;
    for(int i=0;i<n;i++){
        if(a_sum<b_sum){
            possible=false;
            break;

        }
        if(b[i]>a[i]){
            long long x=b[i]-a[i];

          if (std::find(a.begin(), a.end(), 0) != vec.end()) 
a_sum-=((n-1)*x)+1;
        }
    }
    if(possible) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}







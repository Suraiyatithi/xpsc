#include<bits/stdc++.h>
using namespace std;
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int k;
    cin>>k;
    vector<int>arr(k);
    set<int>e;
    for(int i=0;i<k;i++){
        cin>>arr[i];
        e.insert(arr[i]);
    }
    int n=0,m=0;
    k=k-2;
    for(int i=1;i*i<=k;i++){
   if(k%i==0){
      int p_n=i;
     int p_m=k/i;
     if(e.count(p_n) && e.count(p_m)){
            n=p_n;
            m=p_m;
            break;
     }
   }
        
    }
    cout<<n<<" "<<m<<'\n';
}
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
               int s=0;
      int mx=a[n-1];
      for(int i=n-2;i>=0;i--){
        if(a[i]>mx){
            s++;
            mx=a[i];
        }
      
      }
        
           cout<<s<<'\n';
    }
 
    return 0;
}



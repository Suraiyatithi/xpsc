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
        bool c=true;
        while(c){
            c=false;
          for(int i=n-2;i>=0;i--){
                if(a[i]<a[i+1]){
                    a[i]=a[i+1];
                    c=true;
                }
            }
            if(c){
                s++;
            }
        }
        
           cout<<s<<'\n';
    }
 
    return 0;
}



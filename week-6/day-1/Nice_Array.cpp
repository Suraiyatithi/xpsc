#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
       int pos_count=0;
    int neg_count=0;
    vector<int>v;
    for(int i=0;i<n;i++){
 if(a[i]%k==0){
    v.push_back(a[i]);
 }
          long long f_val=floor(1.0*(a[i])/k);
        long long c_val=ceil(1.0*(a[i])/k);
        if(f_val!=0) {
            if(f_val>0){
                pos_count+=f_val;
            }
            else{
                neg_count+=f_val;
            }
        }
        if(c_val!=0) {
            if(c_val>0) {
                pos_count+=c_val;
            }
            else{
                neg_count+=c_val;
            }
        
        
      }

    }
    bool pos=false;
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            if(pos_count-v[i]==neg_count){
                pos=true;
            }
        }
        else if(v[i]<0){
  if(neg_count-v[i]==pos_count){
                pos=true;
            }
        }
    }
    if(pos){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
 
}
    return 0;
}



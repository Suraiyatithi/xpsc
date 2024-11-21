#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    int max_a=INT_MIN;
    int a_i;
      int max_a2=INT_MIN;
    int a_i2;
    int max_b=INT_MIN;
    int b_i;
    map<int,int>mp1;
    map<int,int>mp2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max_a){
            max_a=a[i];
            a_i=i;
        }
        mp1[a[i]]++;
    }
    for(int i=0;i<n;i++){
    if(a_i==i){
        continue;
    }
        if(a[i]>max_a2){
            max_a2=a[i];
            a_i2=i;
        }
        mp2[b[i]]++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
          if(b[i]>max_b){
            max_b=b[i];
            b_i=i;
        }
    }
    if(max_a==max_b && (mp2[max_b]<=1) ){
        
        
      
          if(a_i==b_i)
        {
            cout<<"Yes"<<'\n';
        }
        else{
          
                if(a_i2==b_i){
                    cout<<"No"<<'\n';
                }
                else{
                    cout<<"Yes"<<'\n';
                }
            }
      
    
        }
    
    else if(max_a>max_b){
    cout<<"Yes"<<'\n';
    }
       else {
        bool another=false;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(b_i==i){
                v.push_back(i);
                continue;
                
            }
            if(max_b==b[i] && b_i!=i){
                another=true;
               v.push_back(i);
            }

        }
        if(another) {
            bool one=false;
            bool two =false;
for(int i=0;i<v.size();i++){
    if(v[i]==a_i){
one=true;
    }
    else if(v[i]==a_i2){
        two=true;
    }

}
if(one==true && two==true){
    cout<<"No"<<'\n';
}
else{
    cout<<"Yes"<<'\n';
}
        }
        else{ 
            cout<<"Yes"<<'\n';
        }
    }
}
    return 0;
}


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
    string s1,s2;
    cin>>s1>>s2;
    int chef_point=0;
    int chefina=0;
    int losses=0;
    for(int i=0;i<n;i++){
    if(s1[i]!=s2[i]){
            if(s1[i]=='R' && s2[i]=='S'){
chef_point++;
        }
       else if(s1[i]=='S' && s2[i]=='P'){
            chef_point++;
        }
        else if(s1[i]=='P' && s2[i]=='R'){
            chef_point++;
        }
        else{
            chefina++;
            losses++;
        }
    }

    }
    if(chef_point>chefina){
        cout<<0<<'\n';
    }
  
    else{
        int count=0;
       while(chef_point<=chefina){
    chef_point++;
    chefina--;
    count++;
       }
        cout<<count<<'\n';
    }
}
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    vector<long long int>d;
    long long int total=0;
    long long change_need=0;
    for(int i=0;i<n;i++){
        long long l=i;
        long long r=n-i-1;
        if(s[i]=='L'){
            if(r>l){
                total+=r;
                d.push_back(r-l);
                change_need++;
            }
            else{
                total+=l;
            }
        }
        else{
              if(r<l){
                total+=l;
                d.push_back(l-r);
                change_need++;
            }
            else{
                total+=r;
            }
        }
    }
    vector<long long int>ans(n+1);
      for(int i=change_need;i<=n;i++){
        ans[i]=total;
    }
    sort(d.begin(),d.end(),greater<long long>());
    for(int i=change_need-1;i>=1;i--){
    total-=d.back();
    d.pop_back();
    ans[i]=total;
    }
       
  
//  sort(ans.begin(),ans.end());
    for(int i=1;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';

}
    return 0;
}
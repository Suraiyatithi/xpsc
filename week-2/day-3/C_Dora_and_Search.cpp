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
    set<int>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }

int l,r;
int i=0;
int j=n-1;
bool found=false;
while(j>i){
    if((v[i]!=*s.begin() && v[i]!=*s.rbegin()) && (v[j]!=*s.begin() && v[j]!=*s.rbegin())){
        found=true;
        l=i;
        r=j;
        break;
    }
  else if(v[i]==*s.begin() || v[i]==*s.rbegin()){
 s.erase(v[i]);
    i++;
  }
    else if(v[j]==*s.begin() ||v[j]==*s.rbegin()){
     s.erase(v[j]);
    j--;
  }
  
}

  if(found ){
    cout<<l+1<<" "<<r+1<<'\n';}
  else cout<<-1<<'\n';
}
    return 0;
}



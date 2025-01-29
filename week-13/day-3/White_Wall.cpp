#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
  vector<vector<int>>freq(3,vector<int>(3,0));
  for(int i=0;i<n;i++){
    if(s[i]=='R') freq[i%3][0]++;
    else if(s[i]=='G'){
        freq[i%3][1]++;
    }
    else{
        freq[i%3][2]++;
    }
  }
  int mn=INT_MAX;
  vector<vector<int>>p={{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
  for(auto &x:p){
    int y=0;
    for(int i=0;i<3;i++){
        int mf=freq[i][x[i]];
        int total=(n/3)+(i<(n%3)?1:0);
        y+=total-mf;
    }
    mn=min(mn,y);
  }
  cout<<mn<<'\n';
}
    return 0;
}


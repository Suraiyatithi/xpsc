#include<bits/stdc++.h>
using namespace std;
const int N=205;
int mat[N][N];
bool vist[N][N];
int n,m;
int ans=0;
int maximum;
vector<pair<int,int>>d={{1,1},{1,-1},{-1,1},{-1,-1}};
int current_i,current_j;
bool valid(int ci,int cj){
    return (ci<n && ci>=0 && cj<m && cj>=0);
}
void dfs(int si,int sj){
    vist[si][sj]=true;
    int ci=si+current_i;
    int cj=sj+current_j;
    if(valid(ci,cj)&& !vist[ci][cj]){
        maximum+=mat[ci][cj];
        ans=max(maximum,ans);
        dfs(ci,cj);
    }
}
int main(){
int t;
cin>>t;
while(t--){
    cin>>n>>m;
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            if(mx<mat[i][j]){
                mx=mat[i][j];
            }
        }
    }
    ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            maximum=0;
            maximum+=mat[i][j];
            for(int k=0;k<4;k++){
                memset(vist,false,sizeof(vist));
                current_i=d[k].first,current_j=d[k].second;
                dfs(i,j);
            }
        }
    }

    cout<<max(ans,mx)<<'\n';

}
    return 0;
}
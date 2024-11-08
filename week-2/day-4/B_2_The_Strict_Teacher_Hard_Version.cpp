#include<bits/stdc++.h>
using namespace std;
int main(){
       ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m,q;
    cin>>n>>m>>q;
    vector<int>t(m);
    for(int i=0;i<m;i++){
        cin>>t[i];
    }
    sort(t.begin(),t.end());

    while(q--){
      long long int x;
        cin>>x;


        if(x<t[0]){
cout<<t[0]-1<<'\n';
continue;
}
if(x>t[m-1]){
cout<<n-t[m-1]<<'\n';
continue;
}
    auto it=lower_bound(t.begin(),t.end(),x);
auto jt=it;
jt--;
//    long long int mn=LLONG_MAX;
//     if(it!=t.end()){
// mn=min(mn,abs(*it-x));
//     }
//     if(it!=t.begin()){
//         mn=min(mn,abs(*(it-1)-x));
//     }
//     cout<<mn<<'\n';
//     }
int l=*jt;
int r=*it;
int mid=(r+l)/2;
cout<<min(abs(mid-l),abs(mid-r))<<'\n';
    }


}

    return 0;
}




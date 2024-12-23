// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n,m,k;
//     cin>>n>>m>>k;
// vector<int>a(m);
// for(int i=0;i<m;i++){
//     cin>>a[i];
// }
// unordered_set<int>s;
// vector<int>v;
// for(int i=0;i<k;i++){
//     int x;
//     cin>>x;
//     v.push_back(x);
//     s.insert(x);
// }
// if(n>m){
//     for(int i=0;i<m;i++){
//         cout<<0;
//     }
//     cout<<'\n';
//     continue;
// }
// else if(n==k){
   
//     for(int i=0;i<n;i++){
//         cout<<1;
//     }
//     cout<<'\n';
//     continue;
// }
// else{
//     string result="";
//     for(int i=0;i<m;i++){
//         if(s.find(a[i])==s.end()){
//             result+='1';
//         }
//         else{
//             result+='0';
//         }
 
//     }
//     cout<<result<<'\n';
// }
// }
//     return 0;
// }

// int *a=(int*)malloc(m*sizeof(int));
// int *q=(int*)malloc(k*sizeof(int));
// int *k=(int*)calloc(n+1,sizeof(int));
// for(int i=0;i<m;i++){
//     scanf("%d",&a[i]);
 
// }
// for(int i=0;i<k;i++){
//     scanf("%d",&q[i]);
//     k[q[i]]=1;
// }
// for(int i=0;i<m;i++){
//     if(k[a[i]]){
//         printf("0");
//     }
//     else{
//         printf("1");
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 while(t--){
       int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    vector<int> q(k);
    vector<int> isKnown(n + 1, 0); 
    for (int i = 0; i < k; i++) {
        cin >> q[i];
        isKnown[q[i]] = 1; 
    }
if(n>m){
    for(int i=0;i<m;i++){
        cout<<0;
    }
    cout<<'\n';
    continue;
}
else if(n==k){
   
    for(int i=0;i<m;i++){
        cout<<1;
    }
    cout<<'\n';
    continue;
}
    for (int i = 0; i < m; i++) {
        if (isKnown[a[i]]) {
            cout << "0";
        } else {
            cout << "1";
        }
    }
    cout << '\n'; 
 }

    return 0;
}


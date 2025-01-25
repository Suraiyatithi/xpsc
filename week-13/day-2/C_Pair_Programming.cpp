// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int k,n,m;
//     cin>>k>>n>>m;
//     vector<int>a(n);
//     vector<int>b(m);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//      for(int i=0;i<m;i++){
//         cin>>b[i];
//     }
//     if(k==0 &&a[0]!=0 &&b[0]!=0){
//         cout<<-1<<'\n';
//         continue;
//     }
//       int line=k;
//       vector<int>v;
//       bool found=true;
//     if(n>=m){
//         for(int i=0;i<n;i++){
//             if(a[i]==0) line++;
//             if(i<m && b[i]==0)line++;
//             if(line<a[i] || line<b[i]){
//                 found=false;
//                 break;
//             }
//             if(a[i]<=b[i] && i<m){
//                 // cout<<a[i]<<" "<<b[i]<<" ";
//                 v.push_back(a[i]);
//                 v.push_back(b[i]);
//             }
//             else if(a[i]>b[i] && i<m){
//                 // cout<<b[i]<<" "<<a[i]<<" ";
//                  v.push_back(b[i]);
//                 v.push_back(a[i]);
//             }
//             else{
//                 // cout<<a[i]<<" ";
//                  v.push_back(a[i]);
//             }
//         }
//     }
//     else{
//               for(int i=0;i<m;i++){
//                  if(a[i]==0) line++;
//             if(i<m && b[i]==0)line++;
//             if(line<a[i] || line<b[i]){
//                 found=false;
//                 break;
//             }
//             if(a[i]<=b[i] && i<n){
//                 // cout<<a[i]<<" "<<b[i]<<" ";
//                  v.push_back(a[i]);
//                 v.push_back(b[i]);
//             }
//             else if(a[i]>b[i] && i<n){
//                 // cout<<b[i]<<" "<<a[i]<<" ";
//                 v.push_back(b[i]);
//                     v.push_back(a[i]);
//             }
//             else{
//       v.push_back(b[i]);
//             }
//         }
       
//     }
//     if(!found) cout<<-1<<'\n';
//     else{
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
        
//     }
//     cout<<'\n';
// }}
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        vector<int> result;
        int lines = k;
        int i = 0, j = 0;
        bool valid = true;

        while (i < n || j < m) {
            if (i < n && a[i] == 0) {
                result.push_back(0);
                lines++;
                i++;
            } else if (j < m && b[j] == 0) {
                result.push_back(0);
                lines++;
                j++;
            } else if (i < n && a[i] > 0 && a[i] <= lines) {
                result.push_back(a[i]);
                i++;
            } else if (j < m && b[j] > 0 && b[j] <= lines) {
                result.push_back(b[j]);
                j++;
            } else {
                valid = false;
                break;
            }
        }

        if (valid) {
            for (int x : result) cout << x << " ";
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

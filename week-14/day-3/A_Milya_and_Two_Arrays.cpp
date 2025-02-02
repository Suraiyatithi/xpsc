// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
    
//     for (int &x : a) cin >> x;
//     for (int &x : b) cin >> x;
    
//     sort(a.begin(), a.end()); // Sort a to check different pairings
//     set<int> unique_sums;
    
//     for (int i = 0; i < n; i++) {
//         unique_sums.insert(a[i] + b[i]);
//     }
    
//     if (unique_sums.size() >= 3) {
//         cout << "YES\n";
//     } else {
//         cout << "NO\n";
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }
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
    map<int,int>x;
    map<int,int>y;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x[a[i]]++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        y[b[i]]++;
    }
   
    if(x.size()+y.size()>=4) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
    return 0;
}
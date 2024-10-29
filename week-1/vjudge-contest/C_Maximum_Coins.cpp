#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
 
  int n,x;
  cin>>n>>x;
  vector<long long int>v;
  for(int i=1;i<=n;i++){
    v.push_back(pow(2*1.0,i));
  }
  sort(v.begin(),v.end());
  long long mx=0;
  for(int i=0;i<x;i++){
    mx+=v[i];
  }
cout<<mx<<'\n';
}
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N, X;
//         cin >> N >> X; // Store the coins paid in each game (2^1, 2^2, ..., 2^N)
//         vector<long long> coins;
//         for (int i = 1; i <= N; i++) {
//             coins.push_back(1LL << i);  // Equivalent to 2^i
//         }

//         // Sort in ascending order to get the smallest values first
//         sort(coins.begin(), coins.end());

//         // Sum the smallest X values
//         long long maxCoins = 0;
//         for (int i = 0; i < X; i++) {
//             maxCoins += coins[i];
//         }

//         cout << maxCoins << '\n';
//     }
//     return 0;
// }

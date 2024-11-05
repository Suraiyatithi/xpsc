// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      ios_base::sync_with_stdio(false); 
//     cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     long long int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     sum+=v[i];
//     }
//     if(sum<n){
//         cout<<"NO"<<'\n';
//     }
//     else{

//  if(1<=k){
//     cout<<"YES"<<'\n';
//  }
//  else{
//     cout<<"NO"<<'\n';
//  }
//     }


// }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> chocolates(n);
        for (int i = 0; i < n; ++i) {
            cin >> chocolates[i];
        }

        // Sort the chocolates in ascending order
        sort(chocolates.begin(), chocolates.end());

        // Check if the difference between any two adjacent chocolates exceeds K
        bool possible = true;
        for (int i = 1; i < n; ++i) {
            if (chocolates[i] - chocolates[i - 1] > k) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}

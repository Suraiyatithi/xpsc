// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     if(a.size()==1) {
//         cout<<0<<'\n';
//         continue;
//     }
//     int dif=INT_MIN;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             dif=max(dif,a[j]-a[i]);
//         }
//     }
//     cout<<dif<<'\n';

// }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
           
            cout << 0 << '\n';
            continue;
        }

        int max_diff = INT_MIN;

   
        for (int i = 0; i < n - 1; i++) {
            max_diff = max(max_diff, a[n - 1] - a[i]);
        }

        for (int i = 1; i < n; i++) {
            max_diff = max(max_diff, a[i] - a[0]);
        }

        for (int i = 0; i < n - 1; i++) {
            max_diff = max(max_diff, a[i] - a[i + 1]);
        }

        cout << max_diff << '\n';
    }

    return 0;
}

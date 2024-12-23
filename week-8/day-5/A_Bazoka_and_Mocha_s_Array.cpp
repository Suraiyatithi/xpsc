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
//     int r=0;
//     for(int i=0;i<n-1;i++){
//         if(a[i]>a[i+1]){
// r=i+1;
//         }
//     }
//     if(r==0)
    
// { cout<<"Yes"<<'\n';
// continue;
// }
// bool found=false;
//     for(int i=r;i<n-1;i++){
//         if(a[i]<=a[i+1] && a[i]<=a[0] &&a[i+1]<=a[0]){
// found=true;
//         }
//         else{
//             found=false;
//             break;
//         }
//     }
//     if(found) cout<<"Yes"<<'\n';
//     else{
//         cout<<"No"<<'\n';
//     }
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

        int drops = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > a[(i + 1) % n]) {
                drops++;
            }
        }

        if (drops <= 1) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}

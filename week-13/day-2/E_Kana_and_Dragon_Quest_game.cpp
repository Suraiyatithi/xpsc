// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int k,n,m;
//     cin>>k>>n>>m;
//     if(k<=30){
//         k=k-(m*10);
//             for(int i=0;i<n;i++){
//                  if(k<=0){
//                      break;
//                  }
//                  k=(k/2)+10;
            
//         }
//         if(k<=0) cout<<"YES"<<'\n';
//         else cout<<"NO"<<'\n';
//     }
//     else{
//         for(int i=0;i<n;i++){
//                  if(k<=0){
//                      break;
//                  }
//                  k=(k/2)+10;
   
//         }
//         k=k-(m*10);
//         if(k<=0) cout<<"YES"<<'\n';
//         else cout<<"NO"<<'\n'; 
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
        int x, n, m;
        cin >> x >> n >> m;

        while (n > 0 && x > 20) {
            x = (x / 2) + 10;
            n--;
        }
        x -= m * 10;
        if (x <= 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// long long lcm(int a,int b){
//     return((a/__gcd(a,b))*b);
// }
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int a,b;
//     cin>>a>>b;
//     if(a==b){
//         cout<<"NO"<<'\n';
//         continue;
//     }
//     else{
//         cout<<"YES"<<'\n';
// cout<<lcm(a,b);
// long long int x=a*2;
// if(x%b!=0){
//     cout<<x;
// }
// else{
// cout<<a*3;
// }
// long long y=a*5;
// if(y%b!=0){
//     cout<<y;
// }
// else{
//     cout<<a*4;
// }
// cout<<'\n';
//     }
// }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;

        if (B == 1) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << A << " " << A * B << " " << A * (B + 1) << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

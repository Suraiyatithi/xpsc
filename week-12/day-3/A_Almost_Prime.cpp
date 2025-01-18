// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int n;
//    cin >> n;
//    int count=0;
// for(int k=2;k<=n;k++){
//        map<int, int> cnt;
//    for (int i = 2;i * i <= k;i++) {
//       while (k% i == 0) {
//          cnt[i]++;
//          k /= i;
//       }
//    }

//    if (k > 1) {
//       cnt[k]++;
//    }
// if(cnt.size()==2) count++;

// }
// cout<<count<<'\n';
//    return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count = 0;

    for (int k = 2; k <= n; k++) {
        map<int, int> cnt;
        int temp = k; 
        for (int i = 2; i * i <= temp; i++) {
            while (temp % i == 0) {
                cnt[i]++;
                temp /= i;
            }
        }
        if (temp > 1) {
            cnt[temp]++;
        }
        if (cnt.size() == 2) {
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}

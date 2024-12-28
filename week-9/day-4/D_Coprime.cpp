#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        map<int, int> index_map;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            index_map[a[i]] = i; 
        }

        int max_sum = -1;
        for (auto it1 = index_map.begin(); it1 != index_map.end(); ++it1) {
            for (auto it2 = index_map.begin(); it2 != index_map.end(); ++it2) {
                int num1 = it1->first, idx1 = it1->second;
                int num2 = it2->first, idx2 = it2->second;
                if (__gcd(num1, num2) == 1) { 
                    max_sum = max(max_sum, idx1 + idx2);
                }
            }
        }

        cout << max_sum << "\n"; 
    }
    return 0;
}

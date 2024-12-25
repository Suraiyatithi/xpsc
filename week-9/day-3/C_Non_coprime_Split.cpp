#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;


        if (r - l >= 1) {

            cout << l << " " << l + 1 << endl;
        } else {
      
            cout << -1 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

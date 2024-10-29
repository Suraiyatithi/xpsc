#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Calculate the gaps between consecutive required cells
        vector<long long> gaps;
        for (int i = 1; i < n; ++i) {
            gaps.push_back(a[i] - a[i - 1]);
        }

        // Sort the gaps
        sort(gaps.begin(), gaps.end());

        // Minimum k is half of the second largest gap (since we can paint one extra cell)
        long long min_k = (gaps[(int)gaps.size() - 2] + 1) / 2;

        cout << min_k << endl;
    }

    return 0;
}

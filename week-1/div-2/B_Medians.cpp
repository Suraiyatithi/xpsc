#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find median of a vector
int findMedian(vector<int>& arr) {
    int size = arr.size();
    sort(arr.begin(), arr.end());
    return arr[size / 2];
}

// Main function
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        // Fill array a with values 1 to n
        for (int i = 0; i < n; ++i) {
            a[i] = i + 1;
        }
        
        bool found = false;
        
        // Start creating subarrays
        for (int m = 1; m <= n; m += 2) { // m is odd and should be <= n
            vector<int> medians;
            vector<int> subarray_starts;
            int i = 0;
            
            while (i < n) {
                int subarray_end = min(i + m, n) - 1;
                vector<int> subarray(a.begin() + i, a.begin() + subarray_end + 1);
                medians.push_back(findMedian(subarray));
                subarray_starts.push_back(i + 1);
                i += m;
            }
            
            // Check if median of medians is equal to k
            if (findMedian(medians) == k) {
                cout << subarray_starts.size() << endl;
                for (int j : subarray_starts) {
                    cout << j << " ";
                }
                cout << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}

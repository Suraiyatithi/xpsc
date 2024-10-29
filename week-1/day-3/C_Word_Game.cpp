#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore(); 

        vector<string> words; 

        for (int i = 0; i < 3 * n; i++) {
            string x;
            cin >> x;
            words.push_back(x); 
        }

        map<string, int> cnt; 
        for ( auto& 
         word : words) {
            cnt[word]++; 
        }

        int p1 = 0, p2 = 0, p3 = 0;
        for (int i = 0; i < n; i++) {
            if (cnt[words[i]] == 1) {
                p1 += 3;
            } else if (cnt[words[i]] == 2) {
                p1 += 1;
            }
        }

        for (int i = n; i < 2 * n; i++) {
            if (cnt[words[i]] == 1) {
                p2 += 3;
            } else if (cnt[words[i]] == 2) {
                p2 += 1;
            }
        }

        for (int i = 2 * n; i < 3 * n; i++) {
            if (cnt[words[i]] == 1) {
                p3 += 3;
            } else if (cnt[words[i]] == 2) {
                p3 += 1;
            }
        }

        cout << p1 << " " << p2 << " " << p3 << '\n';
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        string target = "ADVITIYA";
        
        int count = 0;
        for (int i = 0; i < 8; i++) {
            count += (target[i] - s[i] + 26) % 26;
        }
        
        cout << count << '\n';
    }
    
    return 0;
}

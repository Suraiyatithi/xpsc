#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<string, string> p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    set<pair<string, string>> s;

    for (int i = 0; i < n; i++) {
        string start = p[i].first;
        string end = p[i].second;
        
       
        bool extended = true;
        while (extended) {
            extended = false;
            for (int j = 0; j < n; j++) {
                if (end == p[j].first) {
                    end = p[j].second;
                    extended = true;
                }
            }
        }

      
        s.insert({start, end});
    }

    cout << s.size() << '\n';
    for (auto [x, y] : s) {
        cout << x << " " << y << '\n';
    }
    
    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     pair<string, string> p[n];
//     for (int i = 0; i < n; i++) {
//         cin >> p[i].first >> p[i].second;
//     }

//     set<pair<string, string>> s;
   
//       for (int i = 0; i < n; i++) {
//         string start = p[i].first;
//         string end = p[i].second;
//         for (int j = i + 1; j < n; j++) {
//             if (end == p[j].first) {
//                 end = p[j].second;
//                  s.insert({start, end});
//             }
//         }
       
//     }

//     cout << s.size() << '\n';
//     for (auto [x, y] : s) {
//         cout << x << " " << y << '\n';
//     }
    
//     return 0;
// }

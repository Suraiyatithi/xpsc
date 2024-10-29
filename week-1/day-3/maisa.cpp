// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// pair<string,string>p[n];
// for(int i=0;i<n;i++){
//     cin>>p[i].first<<p[i].second;
// }
// set<pair<string,string>>s;
// for(int i=0;i<n;i++){
// for(int j=i+1;j<n;j++){

// if(p[i].second==p[j].first){
// p[i].second=p[j].second;
// s.insert({p[i].first,p[i].second});
// }
// }
// }
// cout<<s.size()<<'\n';
// for(auto [x,y]:s){
//     cout<<x<<" "<<y<<'\n';
// }
//     return 0;
// }
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

        
        bool found = false;
        for (int j = i + 1; j < n; j++) {
            if (end == p[j].first) {
                end = p[j].second;
                found = true;
                break;
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

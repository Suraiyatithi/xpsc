#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    vector<long long>ans(26,LONG_LONG_MAX);
    for(auto &a:st){
        int low=0;
        int high=n-1;
        long long c=0;
        while(low<high){
            if(s[low]==s[high]){
                low++;
                high--;

            }
            else{
                if(s[low]==a){
                    low++;
                    c++;
                }
                else if(s[high]==a){
                    high--;
                    c++;
                }
                else{
                    c=-1;
                    break;
                }
            }
        }
        if(c!=-1) ans[a-'a']=c;
    }

    sort(ans.begin(),ans.end());
    if(ans[0]==LONG_LONG_MAX) cout<<-1<<'\n';
    else cout<<ans[0]<<'\n';
}
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         string s;
//         cin >> s;

//         set<char> st;
//         for (int i = 0; i < n; i++) {
//             st.insert(s[i]);
//         }

//         vector<long long> ans(26, LONG_LONG_MAX);

//         for (auto &a : st) {
//             int low = 0, high = n - 1;
//             long long c = 0;

//             while (low < high) {
//                 if (s[low] == s[high]) {
//                     low++;
//                     high--;
//                 } else {
//                     if (s[low] == a) {
//                         low++;
//                         c++;
//                     } else if (s[high] == a) {
//                         high--;
//                         c++;
//                     } else {
//                         c = -1;
//                         break;
//                     }
//                 }
//             }
//             if (c != -1) ans[a - 'a'] = c;
//         }

//         long long result = *min_element(ans.begin(), ans.end());
//         if (result == LONG_LONG_MAX) cout << -1 << '\n';
//         else cout << result << '\n';
//     }
//     return 0;
// }

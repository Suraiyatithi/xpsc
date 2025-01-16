// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--)
// {
//     long long n,k;
//     cin>>n>>k;
//     vector<long long>a(n);
//     unordered_map<long long,long long>mp;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         mp[a[i]]++;
//     }
//     long long c=0;
//     c+=mp[1];
//     if(mp[1]!=0);
//     k=(long long)pow(2,mp[0]);
//     k--;
//     k*=mp[1];
//     c+=k;
//     cout<<c<<'\n';
// }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        unordered_map<long long, long long> mp;
        
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            sum += a[i];
        }

        
        if (mp[1] == 0) {
            cout << 0 << '\n';
            continue;
        }

        
        long long numSubsequencesOfZeros = (1LL << mp[0]);
        long long result = numSubsequencesOfZeros * mp[1];

        cout << result << '\n';
    }
    return 0;
}

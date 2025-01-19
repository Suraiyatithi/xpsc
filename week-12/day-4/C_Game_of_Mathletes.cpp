#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;

    }
    long long s=0;
    for(auto &[x,y]:freq){
        int c=k-x;
        if(freq.find(c)!=freq.end()){
            if(x==c){
                s+=freq[x]/2;

            }
            else{
                int p=min(freq[x],freq[c]);
                s+=p;
                freq[c]-=p;
            }
            freq[x]=0;
    
        }
    }
    cout<<s<<'\n';

}
    return 0;
}



// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> nums(n);
//         unordered_map<int, int> freq;

//         for (int i = 0; i < n; ++i) {
//             cin >> nums[i];
//             freq[nums[i]]++;
//         }

//         int score = 0;

//         for (auto &[num, count] : freq) {
//             int complement = k - num;

//             // Check if complement exists
//             if (freq.find(complement) != freq.end()) {
//                 if (num == complement) {
//                     // If num == complement, pair half of the occurrences
//                     score += freq[num] / 2;
//                 } else {
//                     // Otherwise, pair as many as possible
//                     int pairs = min(freq[num], freq[complement]);
//                     score += pairs;
//                     freq[complement] -= pairs;
//                 }
//                 freq[num] = 0; // Mark as processed
//             }
//         }

//         cout << score << "\n";
//     }

//     return 0;
// }

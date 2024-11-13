// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n,k,l;
//     cin>>n>>k>>l;
//     priority_queue<int>pq;
//     for(int i=0;i<n;i++){
//         int a,b;
//         cin>>a>>b;
//         if(b==l){
//             pq.push(a);
//         }

//     }
//     if(pq.empty()){
//         cout<<-1<<'\n';
//     }
//     else{
//         if(pq.size()>=k){
//             int len=0;
//             for(int i=0;i<k;i++){
// len+=pq.top();
// pq.pop();
//             }
// cout<<len<<'\n';
//         }
//         else{
//           cout<<-1<<'\n';
//         }
//     }
// }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minOperationsToMaximizeSubarraySum(const vector<int>& A) {
    int n = A.size();
    int maxSum = 0, currentSum = 0, operations = 0;

    // Step 1: Calculate the max subarray sum with minimum operations
    for (int i = 0; i < n; ++i) {
        // If adding the current element makes the sum negative, consider setting it to zero
        if (currentSum + A[i] < 0) {
            if (A[i] < 0) operations++; // Mark this as an operation
            currentSum = 0;  // Reset the current subarray sum
        } else {
            currentSum += A[i];
        }
        
        // Track the maximum subarray sum found
        maxSum = max(maxSum, currentSum);
    }

    // Step 2: Handle edge case where all elements are negative
    if (maxSum == 0) operations = 0;

    return operations;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << minOperationsToMaximizeSubarraySum(A) << endl;
    }
    return 0;
}

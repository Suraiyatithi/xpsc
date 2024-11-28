
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long>a(n);
    vector<long long >b(n-1);
 
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
   long long a1=1;
   while(true){
    a.clear();
    a.push_back(a1);
    bool valid=true;
    for(int i=0;i<n-1;i++){
        int next=b[i]-a.back();
        if(next<=0){
valid=false;
break;
        }
        a.push_back(next);

    }
    if(valid) break;
    ++a1;
   }
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
   cout<<'\n';

}
    return 0;
}
//    int a1 = 1;    // Start with the smallest possible positive value for A[1]

//         while (true) {
//             A.clear();
//             A.push_back(a1);

//             bool valid = true;

//             // Reconstruct array A
//             for (int i = 0; i < N - 1; ++i) {
//                 int next = B[i] - A.back();
//                 if (next <= 0) { // If any value is non-positive, stop and try next a1
//                     valid = false;
//                     break;
//                 }
//                 A.push_back(next);
//             }

//             // If a valid array A is found, break
//             if (valid) {
//                 break;
//             }

//             ++a1; // Increment a1 to try the next candidate
//         }

#include <bits/stdc++.h>
using namespace std;
const int MAX_T = 200000; 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n,k, q;
   cin >> n >>k>> q;
   vector<int> d(MAX_T + 2,0);
   for (int i = 0;i < n;i++) {
      int l, r;
      cin >> l >> r;
      d[l]++;
      d[r + 1]--;
   }

   for (int i = 1;i <= MAX_T;i++) {
      d[i] = d[i - 1] + d[i];
   }
   vector<int>a(MAX_T+1,0);
   for(int i=1;i<=MAX_T;i++){
    a[i]=a[i-1]+(d[i]>=k? 1:0);
   }

while(q--){
    int x,y;
    cin>>x>>y;
 cout<<a[y]-a[x-1]<<'\n';
}

   return 0;
}


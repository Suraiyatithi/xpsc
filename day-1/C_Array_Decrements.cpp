#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                possible = false;
                break;
            }
        }
        if(!possible){
            cout<<"NO"<<'\n';
                continue;
        }
    int mx = 0;
    map<int,int>mp;
    int x=-1;
        for (int i = 0; i < n; i++) {
            if (b[i] ==0) {
                mx = max(mx, a[i]);
            }
            else{
                int dif=a[i]-b[i];
                mp[dif]++;
            }
        }
for(auto it:mp){
    x=it.first;
}

        bool ok = true;
       if(mp.size()>1) ok=false;
       if(x!=-1 && mx>x) ok=false;

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}


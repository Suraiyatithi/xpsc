#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>v(n);
    
            vector<int>r;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
         if (s[j] == 'D') {
                    if (v[i] == 9) {
                        v[i] = 0;
                    } else {
                        v[i] += 1;
                    }
                } else if (s[j] == 'U') {
                    if (v[i] == 0) {
                        v[i] = 9;
                    } else {
                        v[i] -= 1;
                    }
                }
            }
            r.push_back(v[i]);
            
        }
    

    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    cout<<'\n';
}
    return 0;
}


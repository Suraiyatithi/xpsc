#include<bits/stdc++.h>
using namespace std;
int main(){
           ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int q;
cin>>q;
while(q--){

    int n;
    cin>>n;
    vector<int>v;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            v.push_back(i);
        }
    }
    
    int result=v.back()-v[0]+1;
    cout<<result<<'\n';

}
    return 0;
}
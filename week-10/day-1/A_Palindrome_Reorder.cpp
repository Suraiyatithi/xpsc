#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
map<char,int>cnt;
for(int i=0;i<n;i++){
    cnt[s[i]]++;
}
// for(auto[key,value]:cnt){
//     cout<<key<<" "<<value;
// }
int count=0;
for(auto[key,value]:cnt){
    if(value%2!=0){
count++;
    }
}
if(count>1){
    cout<<"NO SOLUTION"<<endl;
}
else{
    string first,middle,last;
    for(auto[key,value]:cnt){
if(value%2!=0){
for(int i=0;i<value;i++){
    middle.push_back(key);
}
}
else{
    for(int i=0;i<value/2;i++){
        first.push_back(key);
        last.push_back(key);
 
    }
}
 
    }
    reverse(last.begin(),last.end());
    string ans=first+middle+last;
    cout<<ans<<endl;
}
    return 0;
}

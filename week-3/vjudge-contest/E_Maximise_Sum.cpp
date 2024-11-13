// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     vector<int>pos;
//     vector<int>neg;
//     int neg_count=0;
//     for(int i=0;i<n;i++){
// int x;
// cin>>x;
// if(x>=0){
//     pos.push_back(x);
// }
// else{
//     neg.push_back(x);
//     neg_count++;
// }
//     }
// long long int pos_sum=0;
//     for(int i=0;i<pos.size();i++){
//         pos_sum+=pos[i];
//     }
// sort(neg.begin(),neg.end());
// long long int neg_sum=0;
// if(neg_count%2==0){
//     for(int i=0;i<neg.size();i++){
//         neg_sum+=neg[i]*(-1);
//     }
// }
// else{
//     for(int i=0;i<neg.size()-1;i++){
//         neg_sum+=neg[i]*(-1);
//     }
//     neg_sum=neg_sum+neg[neg.size()-1];
// }
// long long int result=pos_sum + neg_sum;
// cout<<result<<'\n';
// }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>pos;
    vector<int>neg;
    int neg_count=0;
    int mn=INT_MIN;
    for(int i=0;i<n;i++){
int x;
cin>>x;
if(x<0){
    neg_count++;
    if(x>mn){
        mn=x;
    }
}
int y=abs(x);
pos.push_back(y);
    }
long long int sum=0;
    for(int i=0;i<pos.size();i++){
        sum+=abs(pos[i]);
    }
 if(n==2 ){
    if(pos[0]>=0 && pos[0]<=abs(mn) )
      {  cout<<abs(mn)-pos[0]<<'\n';}
else if(pos[1]>=0 && pos[1]<=abs(mn))
       { cout<<abs(mn)-pos[1]<<'\n';}
    }
   else if(neg_count%2==0){
        cout<<sum<<'\n';
    }
    else{
        cout<<sum+(2*mn)<<'\n';
    }

}
    return 0;
}
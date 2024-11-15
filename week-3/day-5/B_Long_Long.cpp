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
    for(int i=0;i<n;i++){
int x;
cin>>x;
if(x>=0){
    pos.push_back(x);
}
else{
    neg.push_back(x);
    neg_count++;
}
    }
long long int pos_sum=0;
    for(int i=0;i<pos.size();i++){
        pos_sum+=pos[i];
    }
sort(neg.begin(),neg.end());
long long int neg_sum=0;
if(neg_count%2==0){
    for(int i=0;i<neg.size();i++){
        neg_sum+=neg[i]*(-1);
    }
}
else{
    for(int i=0;i<neg.size()-1;i++){
        neg_sum+=neg[i]*(-1);
    }
    neg_sum=neg_sum+neg[neg.size()-1];
}
long long int result=pos_sum + neg_sum;
cout<<result<<'\n';
}
    return 0;
}
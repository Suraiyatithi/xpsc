#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int n;
cin>>n;
int arr[n];
long long int sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
int odd_count=0;
vector<int>odd;
for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        odd.push_back(arr[i]);
odd_count++;
    }
}
if(odd_count%2==0){
    cout<<sum<<'\n';
}
else{
    sort(odd.begin(),odd.end());
    long long int sum2=sum-odd[0];
    cout<<sum2<<'\n';
}
    return 0;
}
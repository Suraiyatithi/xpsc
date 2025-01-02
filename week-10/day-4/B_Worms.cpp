#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int inx=1;
int worm;
vector<int>arr(1000006);
for(int i=1;i<=n;i++){
    cin>>worm;
    while(worm--){
arr[inx]=i;
inx++;
    }
}
int j;
cin>>j;
while(j--){
    cin>>worm;
    cout<<arr[worm]<<'\n';
}
    return 0;
}
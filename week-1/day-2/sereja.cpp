#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
deque<int>dq(n);
for(int i=0;i<n;i++){
    cin>>dq[i];
}
int s_sum=0;
int d_sum=0;
int k=0;
while(!dq.empty()){
    int i=0;
    int j=dq.size()-1;
    if(k%2==0){
        if(dq[i]>=dq[j]){
            s_sum+=dq[i];
            dq.pop_front();
        }
        else{
            s_sum+=dq[j];
            dq.pop_back();
        }
    }
   else {
     if(dq[i]>=dq[j]){
            d_sum+=dq[i];
            dq.pop_front();
        }
        else{
            d_sum+=dq[j];
            dq.pop_back();
        }

    }
    k++;
}
cout<<s_sum<<" "<<d_sum<<'\n';
    return 0;
}
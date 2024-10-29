// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     long long int sum=0;
//     for(int i=0;i<n;i++){
// cin>>v[i];
// sum+=v[i];
//     }
//     vector<int>r_base_sum(n);
//     vector<int>r_base_sum2(n);
//     r_base_sum[0]=v[0];
//     r_base_sum2[n-1]=v[n-1];
//     for(int i=1;i<n;i++){
//         r_base_sum[i]=v[i]+r_base_sum[i-1];
//     }
    
//     if(sum%2==0){
//         cout<<n<<'\n';
//     }
//     else{
// int i;
//         bool found=false;
//         int max_sum=INT_MIN;
//         vector<int>in;
//         for(int i=0;i<n;i++){
//             if(r_base_sum[i]>max_sum && r_base_sum[i]%2==0){
//                 max_sum=r_base_sum[i];
//                 in.push_back(i);
//             }

//         }
//         int x=in.size();
//         if(found) cout<<in[x]+1<<'\n';
//         else cout<<0<<'\n';
//     }
// }
//     return 0;
// }

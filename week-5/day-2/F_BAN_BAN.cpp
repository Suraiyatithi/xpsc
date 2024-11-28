// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         int op=n/2;
//         cout<<op<<'\n';
//         int l=0;
        
//         for(int i=1;i<=op;i++){
//             int x=l+2;
//             int y=i*6;
//             cout<<x<<" "<<y<<'\n';
//             l=y;
            
       
//         }
//     }
//     else{
//         int r=n-1;
//         int z=n*3;
        
//         if(r>0){
//                int op=(r/2);
//         cout<<op+1<<'\n';
//         cout<<z-2<<" "<<z<<'\n';
//         int l=0;
//         for(int i=1;i<=op;i++){
//             int x=l+2;
//             int y=i*6;
//             cout<<x<<" "<<y<<'\n';
//             l=y;
//         }}
//         else{
//             cout<<1<<'\n';
//             cout<<1<<" "<<z<<'\n';
//         }
       
        
//     }
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
    long long s=3*n;
       int op=n/2;
    if(n%2==0){
     
        cout<<op<<'\n';
    }
    else{
        cout<<op+1<<'\n';
    }
    int j=s;
    int i=1;
   while(i<j){
cout<<i<<" "<<j<<'\n';
i=i+3;
j=j-3;
   }
}
    return 0;
}
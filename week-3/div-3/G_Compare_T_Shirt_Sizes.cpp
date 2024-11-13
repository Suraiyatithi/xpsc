#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
     string s1,s2;
     cin>>s1>>s2;
     int x=s1.size();
     int y=s2.size();
     int c1=s1[x-1];
     int c2=s2[y-1];
     if(s1==s2){
        cout<<'='<<'\n';
     }
     else if(c1=='S' &&(c2=='M'||c2=='L')){
        cout<<'<'<<'\n';
     }
    else if(c2=='S' &&(c1=='M'||c1=='L')){
        cout<<'>'<<'\n';
     }
     else if(c1=='M'&& c2=='L'){
        cout<<'<'<<'\n';
     }
       else if(c1=='L'&& c2=='M'){
        cout<<'>'<<'\n';
     }
     else if(c1==c2 &&( x>1 || y>1)){
        int l_x_count=x-1;
        int r_x_count=y-1;
        if(c1=='S'){
            if(l_x_count>r_x_count){
                cout<<'<'<<'\n';
            }
            else{
                cout<<'>'<<'\n';
            }
        }
        if(c1=='M' || c1=='L'){
    if(l_x_count>r_x_count){
                cout<<'>'<<'\n';
            }
            else{
                cout<<'<'<<'\n';
            }
        }
     }

}
    return 0;
}
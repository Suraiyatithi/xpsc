#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
if(y==0){
int ans=ceil((1.0*x)/15);
cout<<ans<<'\n';
continue;
}
else{
int screen_count=0;
 int remain=0;
while(y>0){
    if(y>=2){
        screen_count++;
        remain+=7;
        y-=2;
    }else{
         screen_count++;
        remain+=11;
        y--;
    }
}
if(remain>=x){
    
cout<<screen_count<<'\n';
}
else{
    int z=ceil(1.0*(x-remain)/15);
cout<<screen_count+z<<'\n';
}
}
}
    return 0;
}


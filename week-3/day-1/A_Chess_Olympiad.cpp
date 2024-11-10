#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
int r=4-(x+y+z);

    if(((1*x)+(0.5*y)+r)>((z*1)+(0.5*y))){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }


    return 0;
}
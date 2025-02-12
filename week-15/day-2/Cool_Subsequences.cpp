#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    map<int,int>cnt;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        cnt[a[i]]++;
	    }
	 
	    int val=-1;
	    bool found=false;
	    for(auto[x,y]:cnt){
	        if(y>=2){
	            val=x;
	            found=true;
	            break;
	        }
	    }
	   if(found) {
cout<<1<<'\n';
cout<<val<<'\n';
	   }
	   else{
	       cout<<-1<<'\n';
	   }
	   
	}

}
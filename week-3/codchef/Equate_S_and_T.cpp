#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string s,t;
	    cin>>s>>t;
	   int count_b_s=0;
	   int count_b_t=0;
       int count_a_s=0;
       int count_a_t=0;
	   for(int i=0;i<n;i++){
	       if(s[i]=='b'){
	           count_b_s++;
	       }
           else{
            count_a_s++;
           }
	   }
	      for(int i=0;i<m;i++){
	       if(t[i]=='b'){
	           count_b_t++;
	       }
           else{
            count_a_t++;
           }
	   }
        if(s==t){
        cout<<"Yes"<<'\n';
       }
     else if(s!=t && count_a_s==0 &&count_a_t==0){
        cout<<"No"<<'\n';
       }
	 else  if(count_a_t==count_a_s && s.front()==t.front()){
	       cout<<"Yes"<<'\n';
	   }
    
	   else{
	       cout<<"No"<<'\n';
	   }
	}

}


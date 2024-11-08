#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
      
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
       for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int count_a=0;
    int count_b=0;
    int draw=0;
    vector<int>d(n);
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
          count_a++;  
        }
        else if(a[i]<b[i]){
            count_b++;
            int r=b[i]-a[i]+1;
        d.push_back(r);
        }
        else{
            draw++;
            int r=b[i]-a[i]+1;
        d.push_back(r);
        }
    }
if(n==1 && a[0]+x<=b[0]){
    cout<<"NO"<<'\n';
}
else if(n==1 && a[0]+x>b[0]){
    cout<<"YES"<<'\n';
}
 else  if(count_a>count_b){
        cout<<"YES"<<'\n';
    }
    else if(count_a==count_b && x>=1){
        cout<<"YES"<<'\n';
    }
    else{
        int sum=0;
       sort(d.begin(),d.end());
       int need=((n/2)+1)-count_a;
       for(int i=0;i<need;i++){
              sum=sum+d[i]+1; 
           
       }
       if(sum<=x){
           cout<<"YES"<<'\n';
       }
       else{
           cout<<"NO"<<'\n';
       }
        
    }
    
    
    
    
    
}

    return 0;
}

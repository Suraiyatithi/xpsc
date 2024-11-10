#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        long long n;
        int p;
        cin>>n>>p;

        string w;
  if(n==1 &&p==1){
    w="Evenius";
  }

       else if(p==1) { 
            w=(n%2==1)?"Oddius":"Evenius";
        }
         else {
            w=(n%2==0)?"Evenius":"Oddius";
        }
      

        cout<<"Case "<<i<<": "<<w<<endl;
    }
    return 0;
}
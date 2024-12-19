#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
    string result;
    for (int i = 0; i < n; ++i) {
        if (i % 3 == 0) result += 'a';
        else if (i % 3 == 1) result += 'b';
        else result += 'b';
    }
    
    cout << result << endl;
    return 0;
}
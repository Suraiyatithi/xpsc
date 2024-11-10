#include<bits/stdc++.h>
using namespace std;

string valid(int a,int b,int c){

        vector<int> points = {a, b, c};
    sort(points.begin(), points.end());
    if ((points == vector<int>{1,2,4}) ||
         (points == vector<int>{0,3,6}) ||
        (points == vector<int>{1, 1, 6}) ||  
        (points == vector<int>{2, 2, 2}) ||
        (points == vector<int>{1, 3, 4}) ||   
        (points == vector<int>{0, 4, 4}) ||
        (points == vector<int>{3, 3, 3})) {
        return "perfectus";}
        return "invalidum";

}
int main(){
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
int t;
cin>>t;
for(int i=1;i<=t;i++){
    int a,b,c;
    cin>>a>>b>>c;
    string result=valid(a,b,c);
       cout << "Case " << i << ": " << result << endl;
}
    return 0;
}

    // if((a==6 && b==1 && c==1)||
    //    (a==1 && b==6 && c==1)|| 
    //     (a==1 && b==1 && c==6)||
    //     (a==3 && b==3 && c==3)||
    //     (a==4 && b==4 && c==0)||
    //     (a==4 && b==0 && c==4)||
    //     (a==0 && b==4 && c==4)||
    //     (a==4 && b==3 && c==1)||
    //     (a==4 && b==1 && c==3)||
    //     (a==1 && b==3 && c==4)|| 
    //     (a==1 && b==4 && c==3)||
    //     (a==3 && b==4 && c==1)||
    //     (a==3 && b==1 && c==4)||
    //     (a==2 && b==2 && c==2)||
    //     (a==4 && b==2 && c==1)||
    //     (a==4 && b==1 && c==2)||
    //     (a==1 && b==4 && c==2)||
    //     (a==1 && b==2 && c==4)||
    //     (a==2 && b==1 && c==4)||
    //     (a==2 && b==4 && c==1)
    //     ){
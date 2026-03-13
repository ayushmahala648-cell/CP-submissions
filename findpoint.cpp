#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
//Find the Point 
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int  x1,y1,x3,y3;
        int x2 ,y2;

        cin>>x1>>y1>>x3>>y3;
        //logic is simple we need to apply mid point concept
        x2 = 2*x3 -x1;
        y2 = 2*y3 -y1;

        cout<<x2 << " "<<y2<<endl;
        n--;

    }









    return 0;
}
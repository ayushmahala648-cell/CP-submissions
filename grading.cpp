#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int num;
        cin>>num;

        if(num>=38){
            if((5-(num % 5)) < 3){
                num += 5-(num % 5);
            }
        }
        cout<<num<<endl;
        n--;
    }









    return 0;
}
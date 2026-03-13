#include <iostream>
#include <string>
//camelcase
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt =1;

    for(auto val : s){
        if(isupper(val)){
            cnt++;
        }
    }
    cout<<cnt;


    return 0;
}
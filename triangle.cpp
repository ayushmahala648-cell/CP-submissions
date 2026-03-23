#include <iostream>
#include <string>
#include <vector>
//A - IF-ELSE 

using namespace std;

int main(){
    

    int n;
    cin>>n;

    while(n>0){
        int sum=0 , num;
        for(int i=0 ; i<3 ; i++){
            cin>>num;
            sum +=num;
        }
        if(sum ==180){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        n--;
    }




    return 0;
}
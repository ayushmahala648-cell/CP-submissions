#include <iostream>
#include <string>
#include <vector>
//enormous input test
using namespace std;

int main(){
    int N , K;

    cin>>N>>K;
    int num , cnt=0;
    for(int i=0 ; i<N ; i++){
        cin>>num;
        if(num%K ==0){
            cnt++;
        }
        num=0;
    }
    cout<<cnt<<endl;








    return 0;
}
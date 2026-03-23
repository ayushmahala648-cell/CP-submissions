#include <iostream>
#include <string>
#include <vector>
//B - LOOP+IF-ELSE 

using namespace std;

int main(){
    
    vector <int> alice;
    vector <int> bob;

    for(int i=0 ; i<3 ; i++){
        int num;
        cin>>num;
        alice.emplace_back(num);
    }

    for(int i=0 ; i<3 ; i++){
        int a;
        cin>>a;
        bob.emplace_back(a);
    }

    int apt =0 , bpt =0;

    for(int i=0 ; i<3 ; i++){
        if(alice[i] > bob[i]){
            apt++;
        }
        else if(alice[i] < bob[i]){
            bpt++;
        }
    }

    cout<<apt<<" "<<bpt;
    



    return 0;
}
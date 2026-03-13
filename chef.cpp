#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
//happychef


int main() {
    
    int n;
    cin>>n;

    while(n>0){
        string s;
        cin>>s;

        unordered_set <char> x = {'a' , 'e' , 'i' , 'o' , 'u'};
        int freq =0;
        bool happy=false ,sad;
        for(auto val : s){
            if(x.count(val)){
                freq++;
                if(freq >2){
                    happy = true;
                    break;
                }
            }else{
                freq =0;
            }
        }
        if(happy){
            cout<<"HAPPY"<<endl;
        }
        else{
            cout<<"SAD"<<endl;
        }
        
        n--;
        freq=0;
    }













    
    return 0;
}
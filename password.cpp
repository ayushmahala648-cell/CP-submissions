#include <iostream>
#include <string>
#include <vector>
//to return the min no if things to add to make the password secure
using namespace std;

int main(){
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    

    string s;
    int size;
    vector <int> req(4,0);
    cin>>size;
    cin>> s;

    for(auto c : s){
        if(isdigit(c)){
            req[2]++;
        }
        else if(isupper(c)){
            req[0]++;
        }
        else if(islower(c)){
            req[1]++;
        }
        else{
            req[3]++;
        }
        
    }
    
    int miss =0;

    for(auto val : req){
        if(val == 0){
            miss++;
        }
    }

    cout<<max(6-size , miss)<<endl;



















    return 0;
}
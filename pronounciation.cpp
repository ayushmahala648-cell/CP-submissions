#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
//difficult pronounciation



int main() {
    
    int n;
    cin>>n;

    while(n>0){
        int len;
        cin>>len;
        string s;
        cin>>s;

        unordered_set<char> vowel = {'a','e','i','o','u'}; 
        int freq=0;

        for(int i=0 ; i<len ; i++){
            if(!vowel.count(s[i])){
                freq++;
            }
            if(freq >3){
                
                cout<<"no"<<endl;
                break;
            }
            if(vowel.count(s[i])){
                freq=0;
            }
        }
        if(freq<=3){
            cout<<"yes"<<endl;
        }
        n--;
    }













    
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//pangram 

string lower_case(string s){
    string t;

    for(auto val : s){
        if(isalpha(val)){
            t+=tolower(val);
        }
    }


    return t;

}

int main() {
    
    string s;
    getline(cin,s);
    

    s = lower_case(s);
    int n=s.size();
    
    
    
    vector <int> freq(26,0);
    for(int i=0 ; i<n ; i++){
        freq[int(s[i])-97]++;
    }

    int cnt=0;
    

    for(int i=0 ; i<26 ; i++){
        if(freq[i] ==0){
            cout<<"not pangram"<<endl;
            break;
        }else{
            cnt++;
        }
    }
    if(cnt == 26){
        cout<<"pangram"<<endl;
    }













    
    return 0;
}

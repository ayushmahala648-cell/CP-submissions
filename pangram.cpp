#include <iostream>
#include <string>
#include <vector>
using namespace std;
//pangram
string lowercase(string s , int n){
    string t;

    for(int i=0 ; i<n ; i++){
            
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                t += tolower(s[i]);
            }
    }    
        
        
    }
    return t;
}

int main() {
    
    string s;
    cin>>s;
    int n=s.size();

    s = lowercase(s,n);
    cout<<"lower case string is : "<<s;
    vector <int> freq(26,0);
    for(int i=0 ; i<s.size() ; i++){
        freq[int(s[i])-97]++;
    }
    int cnt=0;
    for(auto val : freq){
        cout<<val<<" ";
    }
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
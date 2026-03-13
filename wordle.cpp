#include <iostream>
#include <string>
#include <vector>
using namespace std;
//wordle
int main() {
    
    string s,t,m;
    int n;
    cin>>n;
    vector <string> ans(n,"a");
    int i=0;
    while(n>0){
        cin>>s;
        cin>>t;

        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == t[i]){
                m += 'G';
            }else{
                m += 'B';
            }
        }
        n--;
        ans[i] = m;
        i++;
        m="";
    }

    for(auto val : ans){
        cout<<val<<endl;
    }











    
    return 0;
}
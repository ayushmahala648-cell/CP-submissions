#include <iostream>
#include <string>
#include <vector>
//hackerrank
using namespace std;

int main(){
    string s;
    int n;

    cin>>n;

    vector <string> test(n,"a");

    for(int i=0 ; i<n ; i++){
        cin>>test[i];
    }

    int k=0 , j=0;

    string check = "hackerrank";
    vector<string> result(n,"a");

    for(int i=0 ; i<n ; i++){
        while(k<test[i].size() && j<check.size()){
            if(test[i][k] == check[j]){
                k++;
                j++;
            }
            else{
                k++;
            }
        }
        if(j == check.size()){
            result[i] = "YES";
        }else{
            result[i] = "NO";
        }
        k=0 , j=0;
    }

    for(auto val : result){
        cout<<val<<endl;
    }







    return 0;
}
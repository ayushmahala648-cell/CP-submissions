#include <iostream>
#include <string>
#include <vector>
// cses-1094
using namespace std;

int main(){
    int n;
    cin>>n;

    vector <long long> vec(n,0);

    for(int i=0 ; i<n ; i++){
        cin>>vec[i];
    }

    long long moves =0;

    for(int i=1 ; i<n ; i++){
        if(vec[i] <vec[i-1]){
            moves += vec[i-1] - vec[i];
            vec[i] = vec[i-1];
        }

    }
    cout<<moves<<endl;











    return 0;
}
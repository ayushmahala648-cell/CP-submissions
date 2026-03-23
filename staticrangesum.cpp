#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
// E - Static Range Sum Queries  

using namespace std;

int main(){
    
    long long n,q;
    cin>>n>>q;
    vector<long long> vec(n,0);

    for(int i=0 ; i<n ; i++){
        cin>>vec[i];
    }

    vector<long long> prefixsum(n+1,0);

    for(int i=1 ; i<n+1 ; i++){
        prefixsum[i] = prefixsum[i-1] + vec[i-1];
    }

    while(q>0){
        
        int n1 , n2;
        cin>>n1>>n2;

        cout<<prefixsum[n2] - prefixsum[n1-1]<<endl;;


        q--;
    }

    



    return 0;
}
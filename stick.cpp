#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;
//sticks of equal length
int main(){
    
    
    long long n;
    cin>>n;

    vector <long long> vec(n,0);

    long long median;
    for(int i=0 ; i<n ; i++){
        cin>>vec[i];
        
    }

    sort(vec.begin() , vec.end());

    median = vec[n/2];

    long long cnt=0;

    for(int i=0 ; i<n ; i++){
        if(vec[i] != median){
            if(vec[i] >median){
                cnt += vec[i]-median;
            }
            else{
                cnt += median - vec[i];
            }
        }
    }

    cout<<cnt<<endl;
    
    
    



















    return 0;
}

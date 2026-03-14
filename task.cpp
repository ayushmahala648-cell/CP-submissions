#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
//task and deadlines

using namespace std;




int main(){
    long long n;
    cin>>n;
    
   
    vector<pair<long long , long long>> vec(n);

    for(int i=0 ; i<n ; i++){
        cin >> vec[i].first >> vec[i].second;
    }

    

    sort(vec.begin() , vec.end() );

    

    long long reward =0;
    long long add=0;
    for(auto val : vec){
        reward += val.second - val.first + add;
        add -= val.first;
    }

    cout<<reward<<endl;

    // for test case 
    //6 10
    //8 15
    //5 12

    //so reward is calculated by algo that (10-6-0) + (15-8-6) + (12-5-8-6) = 2
    //because everytime the time is also increasing so sort the vector pair in smallest order and such that first is smaller han second otherwise second is smaller then next second
    //then creat a reward and add the difference of second and first with adding a variable "add"
    //"add" is a variable which stores the extra time which is subtracted from reward.

    //it has a tc of -O(NlogN) and sc of -O(N)





    return 0;
}
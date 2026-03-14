#include <iostream>
#include <string>
#include <vector>
//Marc's Cakewalk 



using namespace std;
long long power(long long v , int i){
    
    for(int k=0 ; k<i ; k++ ){
        v *=2;
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector <int> vec(n,0);
    
    for(int i=0 ; i<n ; i++){
        cin>>vec[i];
    }

    for(int i=0 ; i<n ; i++){
        for(int j=i ; j>0 ; j--){
            if(vec[j]>vec[j-1]){
                swap(vec[j] , vec[j-1]);
            }
        }
    }

    long long value=0;
    for(int i=0 ; i<n ; i++){
        value += power(1,i) * vec[i];
    }

    cout<<value<<endl;

    // I didnt use the math.h library because the pow() gives a float value hence i made a custom power function which will return power. else i would have used power by typecasting it to long long.

    // it is better to use sort function sort(nums.begin() , nums.end()) or sort(nums.begin() , nums.end() , greater<int>) to arrange in ascending order and descending order as it has -O(NlogN) wheras my sorting has -O(N^2).







    return 0;
}
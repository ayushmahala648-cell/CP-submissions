#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//pairs-hackerrank
int main(){
    
    long long n, k;
    cin >> n >> k;

    vector<long long> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    long long i = 0, j = 1;
    long long cnt = 0;

    while(j < n){
        long long diff = vec[j] - vec[i];

        if(diff == k){
            cnt++;
            i++;
            j++;
        }
        else if(diff < k){
            j++;
        }
        else{
            i++;
        }

        if(i == j){
            j++;
        }
    }

    cout << cnt << endl;

    return 0;
}
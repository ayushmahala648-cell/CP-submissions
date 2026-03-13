#include <iostream>
using namespace std;
//chef and receipt
int main() {
    
    int t;
    cin >> t;

    while(t--){
        int p;
        cin >> p;

        int count = 0;

        if(p > 2048){
            count += p / 2048;
            p = p % 2048;
        }

        count += __builtin_popcount(p);

        cout << count << endl;
    }

    return 0;
}
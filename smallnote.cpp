#include <iostream>
#include <vector>
//small note is to find min change to make for a given money
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> rup = {1,2,5,10,50,100};

    while(n > 0){
        int money;
        cin >> money;

        int rem = 0, pow = 1;
        vector<int> x;
        int cnt = 0;

        
        while(money > 0){
            rem = money % 10;
            x.push_back(rem * pow);
            pow *= 10;
            money /= 10;
        }

        // so this updated code does is that for example we take 81 so array is {1,80} it checks for 100 'not' then 50 'yes' so 80/50 = 1 so cnt=1 then we set the value to 80%50 because 30 is still left so value now becomes 30 and it again iterates in loop and we know that is 2 numbers we are dividing and remainder is smaller than divisor then it increases the cnt by 3 and it becomdes 4 and at end 5as 1 rupee is there.
        
        for(int i = x.size()-1; i >= 0; i--){
            int value = x[i];

            for(int k = 5; k >= 0; k--){
                if(value >= rup[k]){
                    cnt += value / rup[k];
                    value = value % rup[k];
                }
            }
        }

        cout << cnt << endl;

        n--;
    }

    return 0;
}
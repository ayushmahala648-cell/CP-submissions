#include <iostream>
#include <string>
#include <vector>
//return sum of first and last digit
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int num;
        cin>>num;
        int last,first,rem;
        rem = num%10;
        num /=10;
        last = rem;
        while(num>0){
            rem = num%10;
            first = rem;
            num /=10;
            
        }
        cout<<last+first<<endl;
        n--;
        last=0;
        first=0;
        rem=0;
    
    }







    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//kitchen timming(easy)

int main(){

    int n;
    cin>>n;

    while(n--){
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int i=0 ; i<n ; i++){
            int val;
            cin>>val;
            if(val<=0){
                cnt++;
            }
        }
        if(cnt<k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
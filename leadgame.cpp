#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
//C - The Lead Game  

using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector <pair<int,int>> mp;
    
    int p1 = 0 , p2 = 0;
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin>>x>>y;
        p1+=x;
        p2+=y;

        if(p1>p2){
            mp.emplace_back(1,p1-p2);
            
        }
        else{
            mp.emplace_back(2,p2-p1);
        }
    }
    
    int person =0,lead =0;

    for(auto val : mp){
        if(val.second>lead){
            lead = val.second;
            person = val.first;
        }
    }

    cout<<person << " "<<lead;

    



    return 0;
}
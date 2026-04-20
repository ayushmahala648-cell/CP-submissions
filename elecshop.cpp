#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>


using namespace std;

int main(){
    
    int b,n,m; //n is keyboard m is drives
    cin>>b>>n>>m;
    
    vector <int> keyboard(n);
    
    vector <int> drives(m);

    for(int i=0 ; i<n ; i++){
        cin>>keyboard[i];
    }

    for(int i=0 ; i<m ; i++){
        cin>>drives[i];
    }

    sort(keyboard.begin() ,keyboard.end() );
    sort(drives.begin() , drives.end());

    int i=n-1;
    
    int maxcost=-1;

    int j=0;
    while(i>=0){

        if(j>=m){
            j=0;
            i--;
            continue;
        }
        
        int total = keyboard[i]+drives[j];

        if(total>b){
            i--;
            j=0;
            continue;
        }
        
        if(total <=b){
            maxcost = max(maxcost,total);
        }
        j++;

    }

    cout<<maxcost;



    




    return 0;
}
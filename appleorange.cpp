#include <iostream>
#include <string>
#include <vector>
#include <cctype>
//apple and oranges hackerrank
using namespace std;

int main(){
    
    int s,t;
    cin>>s>>t;

    int a,b;
    cin>>a>>b;
    
    int m,n;
    cin>>m>>n;

    vector <int> apple(m,0);
    for(int i=0 ; i<m ; i++){
        cin>>apple[i];

        apple[i] += a;
    }

    vector <int> orange(n,0);
    for(int i=0 ; i<n ; i++){
        cin>>orange[i];

        orange[i] += b;
    }

    int fruitapple=0;

    for(int i =0 ; i<m ; i++){
        if(apple[i]>=s && apple[i] <=t){
            fruitapple ++;
        }
    }

    int fruitorange=0;

    for(int i =0 ; i<n ; i++){
        if(orange[i]>=s && orange[i] <=t){
            fruitorange ++;
        }
    }

    // cout<<"apple are : "<<fruitapple<<" . orange are : "<<fruitorange<<endl; 
    cout<<fruitapple<<endl;
    cout<<fruitorange<<endl;


    


















    return 0;
}

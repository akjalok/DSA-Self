#include <iostream>
//for rows=columns
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<n){
            cout<<'*';
            j++;
        }
        cout<<'\n';
        i++;
    }
}




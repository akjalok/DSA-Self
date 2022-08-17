#include <iostream>
//for basic row number value
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<i+1;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
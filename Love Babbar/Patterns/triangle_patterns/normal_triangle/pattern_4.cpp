#include <iostream>
//1;2,3;3,4,5;4,5,6,7;
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<j+i+1;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
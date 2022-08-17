#include <iostream>
//for basic * pattern
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<'*';
            j++;
        }
        cout<<'\n';
        i++;
    }
}
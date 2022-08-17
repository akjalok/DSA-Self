#include <iostream>
//for reverse column value
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<i-j+1;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
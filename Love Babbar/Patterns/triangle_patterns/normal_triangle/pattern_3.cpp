#include <iostream>
//for basic counting pattern
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int k=1;
    //using while loops
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<k<<' ';
            k++;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
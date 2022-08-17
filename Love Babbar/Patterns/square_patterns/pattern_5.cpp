#include <iostream>
//1,2,3
//4,5,6
//7,8,9
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int k=1;
    //using while loops
    while(i<n){
        int j=0;
        while(j<n){
            cout<<k;
            k++;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
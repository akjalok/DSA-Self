#include <iostream>
//for coulumns values=row number
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<n){
            cout<<i+1;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
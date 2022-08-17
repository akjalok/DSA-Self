#include <iostream>
//for coulumns values=coulumn number
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<n){
            cout<<j+1;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
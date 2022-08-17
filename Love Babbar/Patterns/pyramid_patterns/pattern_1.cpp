#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<n){
            if(j<n-i-1)
            cout<<' ';
            else if(j<n)
            cout<<j;
            j++;
        }
        cout<<'\n';
        i++;
    }
}
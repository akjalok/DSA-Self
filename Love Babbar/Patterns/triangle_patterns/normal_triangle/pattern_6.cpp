#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    //using while loops
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<char('A'+j+i);
            j++;
        }
        cout<<'\n';
        i++;
    }
}
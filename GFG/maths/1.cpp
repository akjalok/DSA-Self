#include <iostream>//trailing zeroes of factors
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    while(n/5!=0){
        count=n/5+count;
        n=n/5;
    }
    cout<<count;
}
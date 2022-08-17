//optimized euclidean algo
#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else
        return gcd(b,a%b);//if b>a, then first recursive call simply reverses the parameters
}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=gcd(a,b);
    cout<<c<<'\n';
}
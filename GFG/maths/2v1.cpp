//gcd of two numbers(euclid algo)
//basic concept is if b>a then gcd(a,b)=gcd(b-a,a)=gcd(b-a,a-b+a) or gcd(b-2a,a)
#include <iostream>
 using namespace std;
 int main(){
    int a,b;
    
    cin>>a>>b;
   while(a!=b){
    if(a>b){
        a=a-b;
    }
    else
        b=b-a;
   }
    cout<<a<<'\n';
    return 0;
 }
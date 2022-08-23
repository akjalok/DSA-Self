//simple implementation of seive of eratosthenes for pirime numbers upto n;
#include <bits/stdc++.h>
using namespace std;
void seive(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if (isPrime[i]){
            for(int j=i*2;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    seive(n);
}
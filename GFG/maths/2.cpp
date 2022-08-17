 #include <iostream>//gcd of two numbers(brute force)
 using namespace std;
 int main(){
    int a,b;
    int c;
    cin>>a>>b;
    if (a>b){
    if(a%b==0)
    c=b;   
    else{
        for (int i=b;i>0;i--){
            if(a%i==0&&b%i==0){
            c=i;
            break;
            }
        }
    }
    }
    else if(b>a){
        if(b%a==0){
            c=a;
        }
        else{
        for (int i=a;i>0;i--){
            if(a%i==0&&b%i==0){
            c=i;
            break;
            }
        }
    }
    }
    cout<<c<<'\n';
    return 0;
 }
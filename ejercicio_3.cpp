
#include <iostream>
using namespace std;
int main(){
    long long n=1,num=600851475143;
    while(n!=num){
        if(num%n==0)
            num=num/n;
        n+=1;
    }
    cout<<"El resultado es "<<num;
    return 0;
}
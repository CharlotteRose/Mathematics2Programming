#include <iostream>


int n = 7;
int a = 3;
int sum = 0;

int multiply( int n, int a){
    if ( n==1 ){
        sum=sum +a;
        std::cout<<sum<<std::endl;
        return a;
    }
    sum = sum + a;
    std::cout<<sum<<std::endl;
    return multiply(n-1,a)+a;
}


int main()
{
  multiply(n,a);
  return 0;
}

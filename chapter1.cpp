#include <iostream>
using namespace std;


int multiply0( int n, int a){
    if (n==1) return a;
    multiply0(n-1,a) + a;
    std::cout  << n "___" a << std:endl;

}



int main(){
    multiply0(7,3);
    return 0;
}

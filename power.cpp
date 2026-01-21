#include<iostream>
int main(){
    int exponent,base,v=1;
    std::cout<<"Enter the the base and exponent of a no respectively\n";
    std::cin>>base>>exponent;
    for(int i=1;i<=exponent;i++){
        v*=base;
    }
    std::cout<<"The value is "<<v;
}
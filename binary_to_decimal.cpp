#include <iostream>
int main(){
    int bin,dec=0,rem,base=1;
    std::cout<<"Enter the binary number\n";
    std::cin>>bin;
    while(bin){
        rem=bin%10;
        dec+=(rem*base);
        base*=2;
        bin/=10;
    }
    std::cout<<"Decimal no is: "<<dec;
}
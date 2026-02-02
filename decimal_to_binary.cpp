#include<iostream>
int main(){
    int dec,bin=0,rem,base=1;
    std::cout<<"Enter the decimal number\n";
    std::cin>>dec;
    while(dec){
        rem=dec%2;
        bin+=(rem*base);
        dec/=2;
        base*=10;
    }
    std::cout<<"Binary number is: "<<bin;
}
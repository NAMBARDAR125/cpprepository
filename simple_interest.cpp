#include<iostream>
int main(){
    float p,r,t,x,a;
    std::cout<<"Enter the principal amount,interest rate and no of years\n";
    std::cin>>p>>r>>t;
    x=(p*r*t)/100;
    a=p+x;
    std::cout<<x<<" is the simple interest\n";
    std::cout<<a<<" is the final amount to be paid after "<<t<<" years";
}
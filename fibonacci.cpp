#include<iostream>
int main(){
    int n,f1,f2,f3;
    std::cout<<"Enter the 1st and 2nd term\n";
    std::cin>>f1>>f2;
    std::cout<<"Enter the no of terms\n";
    std::cin>>n;
    std::cout<<"Fibonacci series has: ";
    for(int i=1;i<=n;i++){
        if(i==1)
        std::cout<<f1;
        else if(i==2)
        std::cout<<f2;
        else{
            f3=f1+f2;
            std::cout<<f3;
            f1=f2;
            f2=f3;
        }
        std::cout<<" ,";
    }
}
#include<iostream>
int  main(){
    int no,f=1;
    std::cout<<"ENTER THE FACTORIAL\n";
    std::cin>>no;
    for(int i=1;i<=no;i++){
        f*=i;
    }
    std::cout<<"Factorial of no\t"<<no<<" is :"<<f;

}
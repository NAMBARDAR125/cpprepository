#include<iostream>
int main(){
    int no;
    std::cout<<"Enter the no to check whether odd or even\n";
    std::cin>>no;
    if(no%2==0){
        std::cout<<no<<" is even\n";

    }
    else{
        std::cout<<no<<" is odd\n";
    }

    
}
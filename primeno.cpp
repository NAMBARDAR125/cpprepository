#include <iostream>
int main(){
    int n,count=0;
    std::cout<<"Enter the number whether it's prime or not\n";
    std::cin>>n;
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count<=2){
        std::cout<<n<<" is prime";
    }
    else{
        std::cout<<n<<" is composite";
    }
}
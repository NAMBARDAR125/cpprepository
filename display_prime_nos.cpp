#include<iostream>
int main(){
    int range,i,j,count;
    std::cout<<"Enter the range to display prime nos\n";
    std::cin>>range;
    std::cout<<"The prime numbers are: ";
    for(i=2;i<=range;i++){
        count=0;
        for(j=2;j<=i;j++){
            if(i%j==0){
                count+=1;
            }
        }
        if(count<2){
            std::cout<<" "<<i;
        }
    }
}
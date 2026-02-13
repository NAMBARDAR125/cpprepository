#include<iostream>
int main(){
    int range,i,j,k=i,rem,sum=0;
    std::cout<<"Enter the range to check for armstrong no\n";
    std::cin>>range;
    std::cout<<"These are the following Armstrong No \n";
    for(k=1,j=i;i<=range;i++){
        while(j){
            int x,exponent=3;
            rem=j%10;
            for(x=1;x<=exponent;x++){
                x*=rem;
            }
            sum+=x;
            j/=10;
        }
        if(sum==i)
        std::cout<<" "<<i;
    }
}
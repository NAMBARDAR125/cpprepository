// Problem: calculate s,s=1-2+3-4+n.
#include <iostream>
int main(){
    int n,sum=0;
    std::cout<<"Enter the no of terms for sum\n";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    std::cout<<sum<<" is the sum ";
}
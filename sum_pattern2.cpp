//Problem find sum,sum of 1/1!+1/2!+...1/n!
#include<iostream>
int main(){
    int n;
    float f,rec,sum=0;
    std::cout<<"Enter the no of terms for sum\n";
    std::cin>>n;
    std::cout<<"Sum of ";
    for(int i=1;i<=n;i++){
        std::cout<<i<<"!,";
        f=1;
        if(i==1)
        sum+=1;
        else{
            for(int j=i;j>1;j--){
                f=f*j;   
                rec=(1/f);
            }
            sum+=rec;
        }
    }
    std::cout<<"is:"<<sum;
}
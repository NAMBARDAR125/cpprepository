#include<iostream>
class largest{
    int a,b,c;
    public:
    void input(){
        std::cout<<"Enter the 3 numbers\n";
        std::cin>>a>>b>>c;
    }
    void big(){
        if(a>b&&a>c)
        std::cout<<a<<" is the largest";
        else if(b>a&&b>c)
        std::cout<<b<<" is the largest";
        else
        std::cout<<c<<" is the largest";
    }
};
int main(){
    largest obj;
    obj.input();
    obj.big();
}
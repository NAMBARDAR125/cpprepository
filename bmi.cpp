#include<iostream>
class bmi{
    float bmi,m,m2,kg;
    public:
    void input(){
        std::cout<<"Enter the weight and height\n";
        std::cin>>kg>>m;
        m2=m*m;
        bmi=(kg/m2);
        std::cout<<bmi<<"is the BMI\n";
    }
    void calculate(){
        if(bmi<18.5)
        std::cout<<"Underweight";
        else if(bmi>=18.5&&bmi<=24.9)
        std::cout<<"Fit";
        else if(bmi>25&&bmi<=29.9)
        std::cout<<"Overweight";
        else
        std::cout<<"Obese";
    }
};
    int main(){
        bmi obj;
        obj.input();
        obj.calculate();
    }

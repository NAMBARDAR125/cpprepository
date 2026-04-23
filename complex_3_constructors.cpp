#include<iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(float val){
        real=val;
        imag=val;
    }
    Complex(float r,float i){
        real=r;
        imag=i;
    }
    void add(Complex c1,Complex c2){
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    void display()const{
        cout<<real<<" + "<<imag<<"i"<<std::endl;
    }
};
int main(){
    Complex comp1(5.5);          
    Complex comp2(10.2,3.8);   
    Complex result;              
    result.add(comp1,comp2);
    cout<<"Complex Number 1: ";
    comp1.display();
    cout<<"Complex Number 2: ";
    comp2.display();
    cout<<"-------------------" << std::endl;
    cout<<"Result of Addition: ";
    result.display();
    return 0;
}
#include<iostream>
using namespace std;

class complex{
    float real, imag;
    public:
    complex(){
        real = 0;
        imag = 0;
    }
    complex(float r, float i){
        real = r;
        imag = i;
    }
    void input(){
        cout<<"Enter the real and imaginary part of the number: ";
        cin>>real>>imag;
    }
    
    // Friend function for addition
    friend complex add(complex, complex);
    
    // Friend function for display
    friend void display(complex);
};

// Friend function to add two complex numbers
complex add(complex c1, complex c2){
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

// Friend function to display complex number
void display(complex c){
    if(c.imag >= 0)
        cout<<c.real<<" + "<<c.imag<<"i"<<endl;
    else
        cout<<c.real<<" "<<c.imag<<"i"<<endl;
}

int main(){
    complex c1, c2, c3;
    
    cout<<"Enter first complex number:"<<endl;
    c1.input();
    
    cout<<"Enter second complex number:"<<endl;
    c2.input();
    
    cout<<"\nFirst complex number: ";
    display(c1);
    
    cout<<"Second complex number: ";
    display(c2);
    
    c3 = add(c1, c2);
    cout<<"Sum of complex numbers: ";
    display(c3);
    
    return 0;
}
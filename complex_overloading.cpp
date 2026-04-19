#include<iostream>
#include<fstream>
using namespace std;
class complex{
    float real;
    float imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    friend istream& operator>>(istream& in,complex& c){
        cout<<"Enter the real and imaginary: "<<flush;
        in>>c.real>>c.imag;
        return in;
    }
    friend ostream& operator<<(ostream& out,complex &c){
        out<<c.real<<" + "<<c.imag<<"i";
        return out;
    }
};
int main(){
    complex c1,c2;
    cin>>c1>>c2;
    cout<<"c1 : "<<c1<<endl;
    cout<<"c2 : "<<c2<<endl;
}
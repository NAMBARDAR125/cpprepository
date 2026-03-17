#include<iostream>
using namespace std;
class complex{
    int r1,i1,r2,i2,r,i;
    public:
    complex();
    void print(){
        cout<<" First No is "<<r1<<" + "<<i1<<" i "<<endl;
        cout<<" Second No is "<<r2<<" + "<<i2<<" i "<<endl;
    }
    void sum(){
        cout<<"The sum of the 2 complex number is : "<<r<<" + "<<i<<" i "<<endl;
    }
};
complex::complex(){
    cout<<"Enter the real and imaginary part of 1st no"<<endl;
    cin>>r1>>i1;
    cout<<"Enter the real and imaginary part of 2nd no"<<endl;
    cin>>r2>>i2;
    r=r1+r2;
    i=i1+i2;
}
int main(){
    complex c1;
    c1.print();
    c1.sum();
    return 0;
}
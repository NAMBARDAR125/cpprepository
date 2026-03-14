#include<iostream>
using namespace std;
class complex {
    int r,i;
    public:
    void getdata();
    void showdata();
    void sum( complex c1,complex c2);
};
void complex::getdata(){
    cin>>r>>i;
   
}
void complex::showdata(){
    cout<<r<<" + "<<i<<" i "<<endl;
}
void complex::sum(complex c1,complex c2){
cout<<(c1.r+c2.r)<<" + "<<(c1.i+c2.i)<<" i "<<endl;
}
int main(){
    complex c1,c2,c3;
    cout<<"Enter the real and imaginary part of 1st no"<<endl;
    c1.getdata();
    cout<<"Enter the real and imaginary part of 2nd no"<<endl;
    c2.getdata();
    cout<<"1st no is :"<<endl;
    c1.showdata();
    cout<<"2nd no is :"<<endl;
    c2.showdata();
    cout<<"The sum of the 2 complex no is : "<<endl;
    c3.sum(c1,c2);
}
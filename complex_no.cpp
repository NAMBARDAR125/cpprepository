#include<iostream>
using namespace std;
class complex{
    int r,i,x,y;
    public:
    void getdata(){
        cout<<"Enter the 1st real and imaginary part of a number"<<endl;
        cin>>r>>i;
    }
    void sum(complex x,complex y){
       r=x.r + y.r;
       i=x.i + y.i;
    }
    void showdata(){
        cout<<r<<"+"<<i<<"i"<<endl;
    }
};
int main(){
    complex obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj1.showdata();
    obj2.showdata();
    obj3.sum(obj1,obj2);
    obj3.showdata();
}
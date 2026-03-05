#include<iostream>
using namespace std;
class complex{
    int r,i,x,y;
    public:
    void getdata(){
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
    cout<<"Enter the real and imaginary part of 1st number"<<endl;
    obj1.getdata();
    cout<<"Enter the real and imaginary part of 2nd number"<<endl;
    obj2.getdata();
    cout<<"1st complex no is :"<<endl;
    obj1.showdata();
    cout<<"2nd complex no is :"<<endl;
    obj2.showdata();
    cout<<"Sum is :"<<endl;
    obj3.sum(obj1,obj2);
    obj3.showdata();
}
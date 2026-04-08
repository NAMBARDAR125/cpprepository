#include<iostream>
using namespace std;
class rectangle{
    double length,breadth;
    public:
    void setdata(double l,double b){
        length=l;
        breadth=b;
    }
    friend int calculateArea(rectangle r);
    
};
int calculateArea(rectangle r){
        return r.length*r.breadth;
    }
int main(){
    rectangle r1;
    double x,y;
    cout<<"Enter the length and breadth for area : "<<endl;
    cin>>x>>y;
    r1.setdata(x,y);
    double area=calculateArea(r1);
    cout<<"Area of the rectangle is : "<<area;
    return 0;
}
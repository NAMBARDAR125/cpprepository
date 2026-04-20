#include<iostream>
using namespace std;
class polygon{
    protected:
    float width,height;
    public:
    void setdata(float w,float h){
        width=w;
        height=h;
    }
    virtual  float calculate()=0;
};
class rectangle: public polygon{
    public:
    float calculate(){
        return width*height;
    }
};
class triangle: public polygon{
    public:
    float calculate(){
        return 0.5*width*height; 
    }
};
int main(){
    polygon *ptr;
    rectangle r;
    triangle t;
    ptr=&r;
    ptr->setdata(3,5);
    cout<<"The area of the rectangle is : "<<ptr->calculate()<<endl;
    ptr=&t;
    ptr->setdata(4,5);
    cout<<"The area of the triangle is : "<<ptr->calculate()<<endl;
}
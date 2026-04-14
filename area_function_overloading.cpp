#include<iostream>
#include<cmath>
using namespace std;
double pi=3.141593;
class Shape{
public:
void area(double r){
    cout<<"The area of the circle is : "<<pi*r*r<<endl;
}
void area(double l,double b){
    cout<<"The area of the rectangle is "<<l*b<<endl;
}
void area(double c,double d,double e){
    double s=(d+e+c)/2;
    double x=sqrt(s*(s-c)*(s-d)*(s-e));
    cout<<"The area of the triangle is : "<<x<<endl;
}
};
int main(){
    Shape shape;
    double c,d,e,r,l,b;
    cout<<"Enter the radius for area"<<endl;
    cin>>r;
    shape.area(r);
    cout<<"Enter the length and breadth for area"<<endl;
    cin>>l>>b;
    shape.area(l,b);
    cout<<"Enter the 1st,2nd and 3rd side of the triangle for area"<<endl;
    cin>>c>>d>>e;
    shape.area(c,d,e);
}
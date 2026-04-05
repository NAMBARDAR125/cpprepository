#include<iostream>
#include<math.h>
using namespace std;
int pi=3.141593;
double area(double r){
    cout<<"The area of the circle is : "<<pi*r*r<<endl;
}
double area(double l,double b){
    cout<<"The area of the rectangle is "<<0.5*l*b<<endl;
}
double area(double c,double d,double e){
    double s=(d+e+c)/2;
    double x=sqrt(s*(s-c)*(s-d)*(s-e));
    cout<<"The area of the triangle is : "<<x;
}
int main(){
    double c,d,e,r,l,b;
    cout<<"Enter the radius for area"<<endl;
    cin>>r;
    area(r);
    cout<<"Enter the length and breadth for area"<<endl;
    cin>>l>>b;
    area(l,b);
     cout<<"Enter the 1st,2nd and 3rd side of the triangle for area"<<endl;
    cin>>c>>d>>e;
    area(c,d,e);
}
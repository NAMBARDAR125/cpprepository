#include<iostream>
#include<cmath>
using namespace std;
double pi=3.14159;
class rectangle{
    double l,b;
    public:
    rectangle(double x, double y) : l(x), b(y) {}
    void print(){
        cout<<"Area of rectangle is : "<<l*b<<endl;
    }
};
class triangle{
    double t,u,v;
    public:
    triangle(double a, double b, double c) : t(a), u(b), v(c) {}
    void print(){
        double s=(t+u+v)/2;
        cout<<"Area of the triangle is : "<<sqrt(s*(s-t)*(s-u)*(s-v))<<endl;
    }
};
class circle{
    double r;
    public:
    circle(double rad):r(rad){}
    void print(){
        cout<<"Area of the circle is : "<<pi*r*r;
    }
};
int main(){
    double l,b,r,t,u,v;
    cout<<"Enter the length and breadth for rectangle's area "<<endl;
    cin>>l>>b;
    rectangle rec(l,b);
    rec.print();
    cout<<"Enter the length of 1st,2nd and 3rd side for triangle's area "<<endl;
    cin>>t>>u>>v;
    triangle tri(t,u,v);
    tri.print();
    cout<<"Enter the radius for circle's area "<<endl;
    cin>>r;
    circle cir(r);
    cir.print();
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
class rectangle{
    float l,b,a,p;
    public:
    void input(){
        cout<<"Enter the length and breadth of the rectangle"<<endl;
        cin>>l>>b;
    }
    void property(){
        p=2*(l+b);
        a=l*b;
        cout<<p<<" and "<<a<<" is the perimeter and area of the rectangle"<<endl;    
    }
};
class triangle{
    float x,y,z,p,s,a,result;
    public:
    void input(){
        cout<<"Enter the value of the 3 sides of the triangle"<<endl;
        cin>>x>>y>>z;
    }
    void property(){
        p=x+y+z;
        s=p/2;
        a=s*(s-x)*(s-y)*(s-z);
        result=sqrt(a);
        cout<<result<<" and "<<p<<" is the area and perimeter of the triangle"<<endl;
    }
};
int main(){
    rectangle obj;
    triangle obj2;
    obj.input();
    obj.property();
    obj2.input();
    obj2.property();
}
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Diamond problem due to ambiguity is solved"<<endl;
    }
};
class B:virtual public A{};
class C:virtual public A{};
class D:public C,public B{};
int main(){
    C obj;
    obj.show();
    return 0;
}
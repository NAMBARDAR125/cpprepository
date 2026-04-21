#include<iostream>
using namespace std;
class base2;
class base1{
    public:
    int pub1=1;
    protected:
    int pro1=2;
    private:
    int pri1=3;
};
class base2{
    friend  class base1;
    public:
    int pub2=4;
    protected:
    int pro2=5;
    private:
    int priv2=6;
};
class  Derived:public base1,public base2{
    public:
    void show(){
        cout<<"Accessibility completed!"<<endl;
        cout<<pub1<<endl;
        cout<<pro1<<endl;
        cout<<pub2<<endl;
        cout<<pro2<<endl;
    }
};
int main(){
    Derived d1;
    d1.show();
}
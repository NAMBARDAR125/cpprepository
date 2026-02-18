#include<iostream>
using namespace std;
class factorial{
    int f=1,no,i=1;
    public:
    void input(){
        cout<<"Enter the number for its factorial"<<endl;
        cin>>no;
    }
    void calculate(){
        for(i=1;i<=no;i++){
            f*=i;
        }
        cout<<f<<" is the factorial of "<<no;
    }
};
int main(){
    factorial obj;
    obj.input();
    obj.calculate();
}
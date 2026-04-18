#include<iostream>
using namespace std;
class bank{
    float principal,years,rate,interest;
    public:
    bank(float p,float y,char type){
        principal=p;
        years=y;
        if(type=='c'){
            rate=4;
        }
        else{
            rate=6;
            if(years>=5){
                rate+=3;
            }
        }
        interest=(principal*rate*years)/100;
    }
    void display(){
        cout<<"Calculated interest is : "<<interest;
    }
};
int main(){
    float p,y;
    char type;
    cout<<"Enter the principal and no of years"<<endl;
    cin>>p>>y;
    cout<<"Enter the type (savings or current)"<<endl;
    cin>>type;
    bank b(p,y,type);
    b.display();
}
#include<iostream>
using namespace std;
class time{
    int m,h,s,rem,d;
    public:
    void getdata(){
        cout<<"Enter the no of hours :"<<endl;
        cin>>h;
        cout<<"Enter the no of mins :"<<endl;
        cin>>m;
        cout<<"Enter the no of seconds :"<<endl;
        cin>>s;
    }
    void calculate(){
        if(s>=60){
            d=s/60;
            m+=d;
            rem=s%60;
            s=rem;
        }
        if(m>=60){
            d=m/60;
            h+=d;
            rem=m%60;
            m=rem;

        }
    }
    void showdata(){
        cout<<"The updated time is "<<h<<" : "<<m<<" : "<<s<<endl;
    }
};
int main(){
    class time t1;
    t1.getdata();
    t1.calculate();
    t1.showdata();
}
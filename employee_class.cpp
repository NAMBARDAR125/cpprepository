#include<iostream>
using namespace std;
class employee{
    private:
    char name[30],sex;
    int age,salary;
    public:
    int c=0,male=0,female=0,sum=0;
    float avg;
    void getdata(){
        cout<<"Enter the name of the employee"<<endl;
        cin>>name;
        cout<<"Enter the age of the employee"<<endl;
        cin>>age;
        if(age>50)
        c+=1;
        cout<<"Enter the gender of the employee"<<endl;
        cin>>sex;
        if(sex=='m'||sex=='M')
            male+=1;
        else
            female+=1;
        cout<<"Enter the salary of the employee"<<endl;
        cin>>salary;
        sum+=salary;
    }
    void showdata(){
        avg=(float)sum/20;
        cout<<"The no of men and women working in the company are :"<<male<<" "<<female<<endl;
        cout<<"No of employees above the age of 50 are "<<c<<endl;
        cout<<"Avg basic salary of an employee is : "<<avg<<endl;
    }
};
int main(){
    employee e;
    int n;
    cout<<"Enter the total no of employees"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        e.getdata();
    }
    e.showdata();
}
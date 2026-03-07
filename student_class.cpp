#include<iostream>
using namespace std;
class student{
    private:
    int rno;
    float avg,sum,marks[5];
    char name[30];
    public:
    void getdata(){
        cout<<"Enter the name of the student "<<endl;
        cin>>name;
        cout<<"Enter the roll no"<<endl;
        cin>>rno;
        for(int i=0;i<5;i++){
            cout<<"Enter the marks out of 100 for subject  "<<i+1<<endl;
            cin>>marks[i];
        }
    }
    void showdata(){
        cout<<"The student's name is "<<name<<endl;
        cout<<"The roll no is "<<rno<<endl;
        for(int i=0;i<5;i++){
            cout<<"MARKS OF SUBJECT "<<i+1<<" "<<marks[i]<<endl;
            sum+=marks[i];
        }
        avg=sum/5;
        cout<<"Average of the marks is "<<avg<<endl;
    }
};
int main(){
    student s;
    s.getdata();
    s.showdata();
}
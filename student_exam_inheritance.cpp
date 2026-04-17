#include<iostream>
using namespace std;
class student{
    protected:
    int rno;
    char name[30];
    char course[20];
    public:
    void input_student(){
        cout<<"Enter the name,rollno and course of the student : "<<endl;
        cin>>name>>rno>>course;
    }
    void display_student(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<rno<<endl;
        cout<<"Course : "<<course<<endl;
    }
};
class exam: public student{
    float m1,m2,m3;
    public:
    void input_marks(){
        input_student();
        cout<<"Enter marks 1,2 and 3: "<<endl;
        cin>>m1>>m2>>m3;
    }
    void display_marks(){
        display_student();
        cout<<"Marks 1 : "<<m1<<endl;
        cout<<"Marks 2 : "<<m2<<endl;
        cout<<"Marks 3 : "<<m3<<endl;
        cout<<"Total Sum : "<<m1+m2+m3<<endl;
        cout<<"Average : "<<(m1+m2+m3)/2<<endl;
    }
};
int main(){
    exam e[10];
    int n;
    cout<<"Enter the no of students"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<endl;
        e[i].input_marks();
    }
    for(int i=0;i<n;i++){
        cout<<"Student Details : "<<i+1<<endl;
        e[i].display_marks();
    }
}
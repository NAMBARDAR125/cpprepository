#include <iostream>
using namespace std;
class student {
    int rollno;
    char name[30];
    int mark1,mark2,mark3;
    int total;
    float average;
public:
    void getdata(){
        cout<<"\nEnter Roll No: ";
        cin>>rollno;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Marks for 3 subjects: ";
        cin>>mark1>>mark2>>mark3;
        total=mark1+mark2+mark3;
        average=total/3.0;
    }
    void displaydata(){
        cout<<rollno<<"\t"<<name<<"\t"<<mark1<<"\t" 
            <<mark2<<"\t"<<mark3<<"\t"<<total<<"\t" 
            <<average<<endl;
    }
};
int main(){
    student s[10];
    int n,i;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0;i<n;i++) {
        cout<<"\n--- Enter details for student "<<(i + 1)<<" ---";
        s[i].getdata();
    }
    cout<<"\nRoll\tName\tM1\tM2\tM3\tTotal\tAvg\n";
    cout<<"------------------------------------------------------------\n";
    for(i=0;i<n;i++) {
        s[i].displaydata();
    }
}
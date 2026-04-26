#include <iostream>
using namespace std;
class Staff {
protected:
    int code;
    string name;
public:
    void input_staff() {
        cout << "Enter Code: ";
        cin >> code;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
    void display_staff() {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};
class Faculty : public Staff {
protected:
    string department, subject, research_area;
public:
    void input_faculty() {
        input_staff();
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Research Area: ";
        getline(cin, research_area);
    }
    void display_faculty() {
        display_staff();
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
        cout << "Research Area: " << research_area << endl;
        cout << "--------------------------" << endl;
    }
};
class Typist : public Staff {
protected:
    string office;
    int speed;
public:
    void input_typist() {
        input_staff();
        cout << "Enter Office: ";
        getline(cin, office);
        cout << "Enter Speed: ";
        cin >> speed;
        cin.ignore();
    }
    void display_typist() {
        display_staff();
        cout << "Office: " << office << endl;
        cout << "Speed: " << speed << " wpm" << endl;
    }
};
class Officer : public Staff {
protected:
    string rank, grade;
public:
    void input_officer() {
        input_staff();
        cout << "Enter Rank: ";
        getline(cin, rank);
        cout << "Enter Grade: ";
        getline(cin, grade);
    }
    void display_officer() {
        display_staff();
        cout << "Rank: " << rank << endl;
        cout << "Grade: " << grade << endl;
        cout << "--------------------------" << endl;
    }
};
class Permanent : public Typist {
private:
    float salary;
public:
    void input_permanent() {
        input_typist();
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
    }
    void display_permanent() {
        display_typist();
        cout << "Salary: " << salary << endl;
        cout << "--------------------------" << endl;
    }
};
class Casual : public Typist {
private:
    float daily_wages;
public:
    void input_casual() {
        input_typist();
        cout << "Enter Daily Wages: ";
        cin >> daily_wages;
        cin.ignore();
    }
    void display_casual() {
        display_typist();
        cout << "Daily Wages: " << daily_wages << endl;
        cout << "--------------------------" << endl;
    }
};
int main() {
    Faculty f;
    Officer o;
    Permanent p;
    Casual c;
    cout << "\nEnter Faculty Details:\n";
    f.input_faculty();
    cout << "\nEnter Officer Details:\n";
    o.input_officer();
    cout << "\nEnter Permanent Typist Details:\n";
    p.input_permanent();
    cout << "\nEnter Casual Typist Details:\n";
    c.input_casual();
    cout << "\n--- Faculty Details ---\n";
    f.display_faculty();
    cout << "\n--- Officer Details ---\n";
    o.display_officer();
    cout << "\n--- Permanent Typist Details ---\n";
    p.display_permanent();
    cout << "\n--- Casual Typist Details ---\n";
    c.display_casual();
    return 0;
}
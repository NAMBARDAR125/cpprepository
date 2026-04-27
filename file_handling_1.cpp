#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char str[30]="Hello World";
    ofstream out("testfile.txt");
    out<<str;
    ifstream in("testfile.txt");
    in>>str;
    cout<<str;
    return 0;
}
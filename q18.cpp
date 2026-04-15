#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char ch;
    ifstream f1("file1.txt");
    ifstream f2("file2.txt");
    ofstream f3("merged.txt");
    if (!f1 || !f2 || !f3) {
        cout << "Error: Could not open files. Make sure file1.txt and file2.txt exist." << endl;
        return 1;
    }
    while (f1.get(ch)) {
        f3.put(ch);
    }
    f3.put('\n');
    while (f2.get(ch)) {
        f3.put(ch);
    }
    cout << "Files merged successfully into 'merged.txt'!" << endl;
    f1.close();
    f2.close();
    f3.close();
    return 0;
}
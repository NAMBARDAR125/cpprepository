#include<iostream>
using namespace std;
// Template class for Generic Stack
template <class T>
class Stack {
    T arr[5]; // Array of type T
    int top;
public:
    Stack(){
        top = -1;
    }
    void push(T val) {
        if (top >= 4) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = val;
            cout << "Pushed: " << val << endl;
        }
    }
    void pop(){
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }
};
int main() {
    cout << "--- Integer Stack ---" << endl;
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.pop();
    cout << "\n--- Float Stack ---" << endl;
    Stack<float> s2;
    s2.push(10.5);
    s2.push(20.7);
    s2.pop();
    cout << "\n--- Character Stack ---" << endl;
    Stack<char> s3;
    s3.push('A');
    s3.push('B');
    s3.pop();
    return 0;
}
#include <iostream>
using namespace std;
class ComplexFriend {
    float real, imag;
public:
    ComplexFriend(float r = 0, float i = 0) : real(r), imag(i) {}
    friend ComplexFriend operator+(const ComplexFriend& c1, const ComplexFriend& c2);
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
ComplexFriend operator+(const ComplexFriend& c1, const ComplexFriend& c2) {
    return ComplexFriend(c1.real + c2.real, c1.imag + c2.imag);
}
int main(){
    cout << "\n--- Part b: Using Friend Function ---" << endl;
    ComplexFriend a(2.0f, 3.0f), b(4.0f, 1.0f);
    ComplexFriend res = a + b;
    cout << "C1 = "; a.display();
    cout << "C2 = "; b.display();
    cout << "Sum = "; res.display();
    return 0;
}
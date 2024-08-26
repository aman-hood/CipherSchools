#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    // Overload + operator
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    // Overload - operator
    Complex operator - (const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }
    // Overload << operator for output
    friend ostream& operator << (ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};
int main() {
    int c1r, c1i, c2r, c2i;
    cout<<"Enter Complex Number 1: ";
    cin>>c1r>>c1i;
    cout<<"Enter Complex Number 2: ";
    cin>>c2r>>c2i;
    Complex c1(c1r, c1i);
    Complex c2(c2r, c2i);
    cout<<"Complex Number 1: "<<c1<<endl;
    cout<<"Complex Number 2: "<<c2<<endl;
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Difference: "<<diff<<endl;
}

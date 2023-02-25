/*
Title : Implement a class Complex which represents the Complex Number data type. Implement the
following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.
*/
#include <iostream>
using namespace std;
class complex
{
public:
    int real, img;
    complex()
    {
        real = 0;
        img = 0;
    }
    complex operator+(complex);
    complex operator*(complex);
    friend ostream &operator<<(ostream &, complex &);
    friend istream &operator>>(istream &, complex &);
};
istream &operator>>(istream &in, complex &obj)
{                                                                                                                                                                                                                                                                                                    
    in >> obj.img;
    in >> obj.real;
    return in;
}
ostream &operator<<(ostream &out, complex &obj)
{
    out << " (" << obj.real;
    out << ") + (" << obj.img << "i)";
    return out;
}
complex complex::operator+(complex obj)
{
    complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
}
complex complex::operator*(complex obj)
{
    complex temp;
    temp.real = real * obj.real - img * obj.img;
    temp.img = img * obj.real + real * obj.img;
    return temp;
}
int main()
{
    complex a, b, c;
    int ch;
    cout << "\n Enter first complex number as real and img:";
    cin >> a;
    cout << "\n Enter second complex number as real and img:";
    cin >> b;
    do
    {
        cout << "\n Menu \n1.Addition\n2.Multiplication\n3.Exit";
        cout << "\n Enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            c = a + b;
            cout << "\n Addition:" << c << "\n";
            break;
        case 2:
            c = a * b;
            cout << "\n Multiplication:" << c << "\n";
            break;
        default:
            break;                                                                                                                                                                                                                                                                                       
        }
    } while (ch != 3);
    return 0;
}


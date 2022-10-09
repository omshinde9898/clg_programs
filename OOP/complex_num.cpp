#include <iostream>
#include <stdlib.h>
using namespace std;


class complex{
    public:
    float real,img;
    complex(){
        real = 0;
        img = 0;
    }
    complex(float a,float b){
        real = a;
        img = b;
    }
    friend complex operator+ (complex,complex);
    friend complex operator- (complex,complex);
    friend complex operator* (complex,complex);

};

complex operator+ (complex c1,complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return(temp);
}

complex operator- (complex c1,complex c2){
    complex temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return(temp);
}

complex operator* (complex c1,complex c2){
    complex temp;
    temp.real = c1.real * c2.real - c1.img*c2.img;
    temp.img = c1.img + c2.img + c2.real*c1.img;
    return(temp);
}

int main(){
    int ch;
    complex c1,c2,c3;
    cout <<"\nEnter real and Imaginary part for first complex number : ";
    cin >> c1.real >> c1.img;

    cout <<"\nEnter real and Imaginary part for second complex number : ";
    cin >> c2.real >> c2.img;

    do{
        cout <<"\n_______ MENU ______"<<endl;
        cout <<"\n1 : Addition"<<endl;
        cout <<"\n2 : Substraction "<<endl;
        cout <<"\n3 : Multiplication"<<endl;
        cout <<"\nEnter Your Choice : "<<endl;
        cin >> ch;
        
        switch (ch)
        {
        case 1:
            c3 = c1+c2;
            cout << "Addition is : "<<c3.real<<"+"<<c3.img<<"i"<<endl;
            break;
        case 2:
            c3 = c1-c2;
            cout << "Substraction is : "<<c3.real<<"+"<<c3.img<<"i"<<endl;
            break;
        case 3:
            c3 = c1*c2;
            cout << "Multiplication is : "<<c3.real<<"+"<<c3.img<<"i"<<endl;
            break;
        case 4:
            exit(0);
        default:
            cout << "\nInvalid Choice"<<endl;
            break;
        }
    }while (ch != 4);
}
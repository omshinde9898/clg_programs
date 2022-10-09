#include <iostream>
#include <stdlib.h>

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
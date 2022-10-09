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
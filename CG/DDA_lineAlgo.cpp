#include <iostream>
#include <math.h>
#include <graphics.h>

void main(){
    float x,y,x1,y1,x2,y2,dx,dy,step;
    int i,gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    cout<<"Enter the value of x1 and y1 : ";

    cin>>x1>>y1;
    cout<<"Enter the value of x2 and y2: ";
    cin>>x2>>y2;
 
    dx=abs(x2-x1);
    dy=abs(y2-y1);
 
    if(dx>=dy){
        step=dx;
    }else{
        step=dy;
    }

    dx=dx/step;
    dy=dy/step;
 
    x=x1;
    y=y1;
 
    for(i=0;i<step;i++){
        putpixel(x,y,5);
        x=x+dx;
        y=y+dy;
        delay(50);
    }
    closegraph();
}
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void Xsheartriangle(){

    int X,Y,X1,Y1,X2,Y2,X3,Y3,shx;
   X = 200, Y = 200, X1 = 300, Y1 = 200, X2 = 250, Y2 = 100, shx = 1.2;
    setcolor(5);
    line(X,Y,X1,Y1);
    line(X1,Y1,X2,Y2);
    line(X2,Y2,X,Y);

    setcolor(7);
    line(X+Y*shx,Y,X1+Y1*shx,Y1);
    line(X1+Y1*shx,Y1,X2+Y2*shx,Y2);
    line(X2+Y2*shx,Y2,X+Y*shx,Y);
}

void Ysheartriangle(){

    int X,Y,X1,Y1,X2,Y2,X3,Y3,shy;
     X = 200, Y = 200, X1 = 300, Y1 = 200, X2 = 250, Y2 = 100, shy = 1.2;
    setcolor(5);
    line(X,Y,X1,Y1);
    line(X1,Y1,X2,Y2);
    line(X2,Y2,X,Y);

    setcolor(7);
    line(X,Y+X*shy,X1,Y1+X1*shy);
    line(X1,Y1+X1*shy,X2,Y2+X2*shy);
    line(X2,Y2+X2*shy,X,Y+X*shy);

}

void rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4 ){
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
}

void XshearRectangle(){
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
    x1=100, y1=10, x2=200, y2=10, x3=200, y3=100, x4=100, y4=100;
    float sx = 1.5;
    rectangle(x1,y1,x2,y2,x3,y3,x4,y4);

    rectangle(x1+(y1*sx),y1,x2+(y2*sx),y2,x3+(y3*sx),y3,x4+(y4*sx),y4);

}

void YshearRectangle() {
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
    x1=100, y1=10, x2=200, y2=10, x3=200, y3=100, x4=100, y4=100;
    float sy = 1.5;
    rectangle(x1,y1,x2,y2,x3,y3,x4,y4);

    rectangle(x1,y1+(x1*sy),x2,y2+(x2*sy),x3,y3+(x3*sy),x4,y4+(x4*sy));
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int choose;
    cout<<"What do you want to draw?"<<endl;
    cout<<"Enter 1 for Triangle\nEnter 2 for Rectangle: "<<endl;
    cin>>choose;
    if(choose == 1){
        cout<<"Enter 1 for Xshear\nEnter 2 for Yshear: "<<endl;
        cin>>choose;
        if(choose == 1){
            Xsheartriangle();
        }else{
            Ysheartriangle();
        }
    }else{
        cout<<"Enter 1 for Xshear\nEnter 2 for Yshear: "<<endl;
        cin>>choose;
        if(choose == 1){
            XshearRectangle();
        }else{
            YshearRectangle();
        }
    }
    getch();
}
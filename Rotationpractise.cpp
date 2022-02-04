#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

float r,t;

void linedraw(){
    int x1,y1,x2,y2;
    float a,t;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&x2,&y2);
    printf("Enter angle for rotation\n");
    scanf("%f",&a);
    t=a*(3.14/180);
    line(x1,y1,x2,y2);
    x1=(x1*cos(t))-(y1*sin(t));
    y1=(x1*sin(t))+(y1*cos(t));
    x2=(x2*cos(t))-(y2*sin(t));
    y2=(x2*sin(t))+(y2*cos(t));
    line(x1,y1,x2,y2);
}

void drawRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
}


void rectangleRotate(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, float t){
    x1=(x1*cos(t))-(y1*sin(t));
    y1=(x1*sin(t))+(y1*cos(t));
    x2=(x2*cos(t))-(y2*sin(t));
    y2=(x2*sin(t))+(y2*cos(t));
    x3=(x3*cos(t))-(y3*sin(t));
    y3=(x3*sin(t))+(y3*cos(t));
    x4=(x4*cos(t))-(y4*sin(t));
    y4=(x4*sin(t))+(y4*cos(t));

    drawRectangle(x1,y1,x2,y2,x3,y3,x4,y4);
}

void rectangle(){
     int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
    float a,t;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&x2,&y2);
    printf("Enter the value of third coordinate:");
    scanf("%d %d",&x3,&y3);
    printf("Enter the value of fourth coordinate:");
    scanf("%d %d",&x4,&y4);

    printf("Enter angle for rotation\n");
    scanf("%f",&a);
    t=a*(3.14/180);
    drawRectangle(x1,y1,x2,y2,x3,y3,x4,y4);
    rectangleRotate(x1,y1,x2,y2,x3,y3,x4,y4,t);
    // 100 100 200 200
}

void linerotate (float a, float b, float c, float d)
{
    line (a*cos(t)-b*sin(t),a*sin(t)+b*cos(t),c*cos(t)-d*sin(t),c*sin(t)+d*cos(t));
}

void triangle(){
    int X,Y,X1,Y1,X2,Y2;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&X,&Y);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&X1,&Y1);
    printf("Enter the value of third coordinate:");
    scanf("%d %d",&X2,&Y2);
    printf("Enter rotation  factor\n");
    scanf("%f",&r);
    t = (3.14/180)*r;

    setcolor(GREEN);
    line(X,Y,X1,Y1);
    line(X1,Y1,X2,Y2);
    line(X2,Y2,X,Y);

    setcolor(BLUE);
    linerotate(X,Y,X1,Y1);
    linerotate(X1,Y1,X2,Y2);
    linerotate(X2,Y2,X,Y);
    // 200 200 300 200 250 100
}

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int choose;
    cout<<"What do you want to draw?\nEnter 1 for Line,\nEnter 2 for Rectangle \nand 3 for Triangle: ";
    cin>>choose;
    if (choose == 1){
        linedraw();
    }else if (choose == 2){
        rectangle();
    }else{
        triangle();
    }
    getch();
    closegraph();
}

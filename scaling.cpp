#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

float r,t;

void linedraw(){
    int x1,y1,x2,y2;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&x2,&y2);
    float Sx, Sy;
    cout<<"Enter the scaling factor of Sx and Sy:"<<endl;
    cin>>Sx>>Sy;
    line(x1,y1,x2,y2);
    line(x1*Sx,y1*Sy,x2*Sx,y2*Sy);
}

void drawRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
}

void rectangle(){
     int x1,y1,x2,y2,x3,y3,x4,y4;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&x2,&y2);
    printf("Enter the value of third coordinate:");
    scanf("%d %d",&x3,&y3);
    printf("Enter the value of fourth coordinate:");
    scanf("%d %d",&x4,&y4);
    float Sx, Sy;
    cout<<"Enter the scaling factor of Sx and Sy:"<<endl;
    cin>>Sx>>Sy;
    drawRectangle(x1,y1,x2,y2,x3,y3,x4,y4);
    drawRectangle(x1*Sx,y1*Sy,x2*Sx,y2*Sy,x3*Sx,y3*Sy,x4*Sx,y4*Sy);
    // 100 100 200 200
}


void triangle(){
   int X,Y,X1,Y1,X2,Y2;
    float Sx, Sy;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&X,&Y);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&X1,&Y1);
    printf("Enter the value of third coordinate:");
    scanf("%d %d",&X2,&Y2);
    cout<<"Enter the scaling factor of Sx and Sy:"<<endl;
    cin>>Sx>>Sy;

    setcolor(GREEN);
    line(X,Y,X1,Y1);
    line(X1,Y1,X2,Y2);
    line(X2,Y2,X,Y);

    setcolor(RED);
    line(X*Sx,Y*Sy,X1*Sx,Y1*Sy);
    line(X1*Sx,Y1*Sy,X2*Sx,Y2*Sy);
    line(X2*Sx,Y2*Sy,X*Sx,Y*Sy);
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
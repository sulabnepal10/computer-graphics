#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void linedraw(){
    int x1,y1,x2,y2;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&x2,&y2);
    cout<<"Before Reflection Object in 2nd Quadrant"<<endl;
    line(getmaxx()/2, 0, getmaxx()/2,getmaxy());
    line(0, getmaxy() / 2, getmaxx(),getmaxy() / 2);
    setcolor(14);
    line(x1,y1,x2,y2);
    cout<<"After Reflection"<<endl;
    setcolor(3);
    line(getmaxx() - x1, y1, getmaxx() - x2, y2);
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
    cout<<"Before Reflection Object in 2nd Quadrant"<<endl;
    line(getmaxx()/2, 0, getmaxx()/2,getmaxy());
    line(0, getmaxy() / 2, getmaxx(),getmaxy() / 2);
    setcolor(14);
    drawRectangle(x1,y1,x2,y2,x3,y3,x4,y4);
    cout<<"After Reflection"<<endl;
    setcolor(3);
    drawRectangle(getmaxx() -x1,y1,getmaxx() -x2,y2,getmaxx() -x3,y3,getmaxx() -x4,y4);

}


void triangle(){
   int X,Y,X1,Y1,X2,Y2;
    printf("Enter the value of first coordinate:");
    scanf("%d %d",&X,&Y);
    printf("Enter the value of second coordinate:");
    scanf("%d %d",&X1,&Y1);
    printf("Enter the value of third coordinate:");
    scanf("%d %d",&X2,&Y2);
    cout<<"Before Reflection Object in 2nd Quadrant"<<endl;
    line(getmaxx()/2, 0, getmaxx()/2,getmaxy());
    line(0, getmaxy() / 2, getmaxx(),getmaxy() / 2);
    setcolor(14);

    line(X,Y,X1,Y1);
    line(X1,Y1,X2,Y2);
    line(X2,Y2,X,Y);

    setcolor(RED);
    line(getmaxx() - X,Y,getmaxx() - X1,Y1);
    line(getmaxx() - X1,Y1,getmaxx() -X2,Y2);
    line(getmaxx() -X2,Y2,getmaxx() -X,Y);
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
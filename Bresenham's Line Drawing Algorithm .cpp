#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    int x0, x1, y0, y1, i;
    setbkcolor(WHITE);
    printf("Enter coordinate x0:");
    scanf("%d", &x0);
    printf("Enter coordinate y0:");
    scanf("%d", &y0);
    printf("Enter coordinate x1:");
    scanf("%d", &x1);
    printf("Enter coordinate y1:");
    scanf("%d", &y1);

    int dx, dy, p, x, y;  
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
    while(x<x1)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,7);  
            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            putpixel(x,y,7);  
            p=p+2*dy;}  
            x=x+1;  
        }  
    delay(10000000);
    getch();
    closegraph();
}

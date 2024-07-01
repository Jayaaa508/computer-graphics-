#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<dos.h>  
void flood(int,int,int,int);  
int main()  
{  
     int gd=DETECT, gm, e, x, y, r;
     initgraph(&gd, &gm,NULL);
    rectangle(50,50,250,250);  
    flood(55,55,10,0);  
    getch();  
}  
void flood(int x,int y,int fill, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  
         
        putpixel(x,y,fill);  
        flood(x+1,y,fill,defaultColor);  
        flood(x-1,y,fill,defaultColor);  
        flood(x,y+1,fill,defaultColor);  
        flood(x,y-1,fill,defaultColor);  
    }  
}

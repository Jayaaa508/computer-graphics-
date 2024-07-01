
#include <graphics.h>
   

void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}
   
//driver code
int main()
{
    int gd=DETECT, gm, e, x, y, r;
     initgraph(&gd, &gm,NULL);
   
     x = 250 ;
     y = 200 ;
     r = 50;
   
    // circle function
    circle(x, y, r);
   
    // Function calling
    boundaryFill4(x, y, 6, 15);
   
    delay(10000);
   
    getch();

    closegraph();
   
    return 0;
}

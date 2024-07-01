#include<graphics.h>
int main(){
 int gd = DETECT,gm;
   initgraph(&gd, &gm, (char *)"");
    
    setcolor(WHITE);
    rectangle(150,180,250,300);
    rectangle(250,180,420,300);
    rectangle(180,250,220,300);
  
    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);
  
   
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(182, 252, WHITE);
    setfillstyle(SOLID_FILL, RED);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);
    delay(10000000);
    getch();
    closegraph();
     
     return 0;
}

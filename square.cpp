#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); 
    rectangle(320, 320, 200, 200);
    getch();
    closegraph();
    return 0;
}

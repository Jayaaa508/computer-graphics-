#include <graphics.h>
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(50,40,190,40);
    getch();
    closegraph();
    return 0;
}

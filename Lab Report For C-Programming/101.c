#include<graphics.h>
#include<conio.h>
int main()
{
int gd DETECT, gm, x,y,r;
initgraph(&gd, &gm, "C:\\TC\\BGI ");
printf("Enter position and radius of circle\n\n"); scanf("\d\d\d", &x,&y,&r);
circle (x,y,r);
putpixel (x,y,RED);
outtextxy (200, 300, 50, "CIRCLE"): 1
getch();
closegraph();
return 0;
}
#include <stdio.h>
#include <stdlib.h>
#pragram warning (disable:4996)
main ()
{
double l, w, h;
double s, v;
printf("please input l:");
scanf("%lf", &l);
printf("please input w:");
scanf("%lf", &w);
printf("please input h:");
scanf("%lf", &h);
s = ((l * w) + (l * h) + (w * h)) * 2;
v = l * w * h;
printf("s = %lf\nv = %lf\n", s, v);
getch();
return 0;
}

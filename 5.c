#include <stdio.h>

int main(){
    double x,y,z;
    scanf("%lf %lf %lf", &x, &y,&z);
    double max,min,cr;
    max=z;
    if (x>z)
        max=x;
    if (max<y)
        max=y;
    min=y;
    if (x<y)
        min=x;
    if (min>z)
        min=z;
    cr=x+y+z-max-min;
    printf("%lf %lf %lf", min, cr, max);
}
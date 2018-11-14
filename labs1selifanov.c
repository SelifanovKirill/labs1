#include <stdio.h>
#include <math.h>
int main ()
{
double G,F,Y,a,x;
const float pi=3.14;
printf("Введите x: \n");
scanf ("%lf", &x);
printf("Введите a: \n");
scanf ("%lf", &a);
G=(3*(-3*(a*a)+2*a*x+21*(x*x)))/(35*(a*a)+37*a*x+6*(x*x));
F=-1*((1)/(sin(20*(a*a)+9*a*x-20*(x*x)-pi/2)));
Y=(acos(a*a-6*a*x+5*(x*x)+1));
printf("G =  %lf \n", G);
printf("F =  %lf \n", F);
printf("Y =  %lf \n", Y);
printf("%x", Y);
return 0;
}

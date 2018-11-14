#include <stdio.h>
#include <math.h>
int main()
{
float a,x,G,F,Y;
printf("Введите число a ");
scanf("%f", &a);
printf("Введите число x ");
scanf("%f", &x);
G = (9*(20*pow(a,2)-31*a*x+12*pow(x,2))/10*pow(a,2)-17*a*x+6*pow(x,2));
F = (-atan(7*pow(a,2)-2*a*x-9*pow(x,2)));
Y = (-atan(2*pow(a,2)+a*x-3*pow(x,2)));
printf("G = %f, \nF = %f, \nY = %f, \n", G, F, Y);
return 0;
}

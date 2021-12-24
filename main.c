#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    float Arm1, Arm2, Arm3, s, Area;
    printf("Enter 3 Sides of Triangle = ");
    scanf("%f%f%f", &Arm1, &Arm2, &Arm3);
    s=(Arm1+Arm2+Arm3)/2;
    Area=(sqrt(s*(s-Arm1)*(s-Arm2)*(s-Arm3)));
    printf("Area of Rectangle is = %.2f", Area);
    getch();
    return 0;
}

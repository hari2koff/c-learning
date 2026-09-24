// area of circle
#include<stdio.h>
#include<conio.h>
void main () {
int radius;
float area;
clrscr();
float pi =3.14;
printf("Radius -\n");
scanf("%d",&radius);

area =pi*radius*radius;
printf("Area is : %f",area);
getch();
}
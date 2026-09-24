#include<stdio.h>
#include<conio.h>
void main () {
char studentName[30];
int age ;
char grade;
char branch[10];
clrscr();
printf("enter your name -\n ");
scanf("%s",&studentName);
printf("enter your age -\n ");
scanf("%d",&age);
printf("enter your grade -\n ");
scanf(" %c",&grade);
printf("enter your branch -\n");
scanf(" %s",&branch);
printf("-----Student details-----\n");
printf("Name - %s\n",studentName);
printf("Age - %d\n",age);
printf("Grade - %c\n",grade);
printf("Branch - %s",branch);
getch();


}

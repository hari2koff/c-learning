#include<stdio.h>
/*
op 1 - area of circle
op 2 - area of rectangle 
op 3 - area of square



*/
int main () {
  
    int radius,len,width,op ;
    float pi = 3.14;
    float area ;
    printf("----Area calculator----\n");
    printf("Enter input - \n");
    printf("1 - Circle \n2 - rectangle \n3 - square \n");
    
    scanf("%d",&op);
    
    switch(op) {
        // circle
        case 1 :
        printf("Enter radius - \n");
        scanf("%d",&radius);
        area = pi * radius * radius ;
        printf("Area is %0.2lf",area);
        break;
        // Rectangle
        case 2 :
        printf("Enter len and width - \n");
        scanf("%d %d",&len,&width);
        area = len * width ;
        printf("Area is %0.0lf",area);
        break;
        //square
        case 3 :
        printf("Enter len of sq - \n");
        scanf("%d",&len);
        area = len * len ;
        printf("Area is %0.0lf",area);
        break;
        default :
        printf("Invalid input");
        break;
        }
        
        return 0;
    
    return 0 ;
}

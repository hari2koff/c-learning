#include<stdio.h>
int main () {
    int d ;
    scanf("%d",&d);
    
    if (d > 0 ){
        printf("Fine: Rs. %d",d*5);
    }else{
        printf("Fine: Rs. 0");
    }
    return 0 ;
}
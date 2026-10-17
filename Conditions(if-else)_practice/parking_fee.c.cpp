#include<stdio.h>
int main () {
    int h ; 
    scanf("%d",&h);
    
    if(h == 2 ){
        printf("Fee: Rs. %d",50);
    }else {
        printf("Fee: Rs. %d",50+(30*(h-2)));
    }
    return 0 ;
}
#include<stdio.h>
int main () {
    int ticket ; 
    scanf("%d",&ticket);
    
    if(!ticket){
        printf("Not Eligible");
        
    }else {
        printf("Eligible");
    }
    
    return 0 ;
}
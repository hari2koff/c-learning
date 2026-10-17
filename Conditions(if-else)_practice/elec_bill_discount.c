#include<stdio.h>
int main () {
    int bill ;
    scanf("%d",&bill);
    
    if (bill >= 2000){
        printf("Final Bill: Rs. %d",bill-100);
    }else {
        printf("Final Bill: Rs. %d",bill);
    }
    
    return 0 ;
}
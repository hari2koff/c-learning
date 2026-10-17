#include<stdio.h>
int main () {
    int bal , amt ;
    scanf("%d %d",&bal,&amt);
    
    if (bal >= amt && amt % 100 == 0){
        printf("Withdrawal successful");
        
    }else {
        printf("Withdrawal failed");
    }
    return 0 ;

}
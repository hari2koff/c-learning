#include<stdio.h>

int main () {
    int n ;
    scanf("%d",&n);

    
    while(1){
        int seq = 0 ; 
        while(n!=0 ){
            seq += (n%10) * (n%10) ;
            n /= 10 ;
        }
        printf("%d ",seq);
        if(seq >= 10) {
            n = seq ;
            printf("-> ");
            
            
        }else {
            break ;
        }
        
    }
    
    return 0 ;
    
}
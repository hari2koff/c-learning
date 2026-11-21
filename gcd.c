#include<stdio.h>
int main () {
    int n, m ;
    scanf("%d %d",&n,&m);
    int min = n ;
    if(m < min){
        min = m ;
    }
    // GCD
    int max1 =  0;
    for(int i = 1 ; i <= min ; i++){
        if(n % i == 0 && m %i == 0){
            
            if(i > max1 ){
                max1 = i ;
            }
        }
        
    }
    printf("%d",max1);
    
    
    
    return 0 ;
}
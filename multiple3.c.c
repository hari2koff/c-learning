/******************************************************************************
            Q. Sum of Multiples of 3
    
Scenario: A number game asks the program to examine all numbers from 1 to n.
Add only the numbers that are exactly divisible by 3.
   
*******************************************************************************/

#include <stdio.h>

int main () {
    int n, sum,c ;
    scanf("%d",&n);
    sum = 0 ;
    
    for (int i = 1 ; i <= n; i ++){
        if (i % 3 == 0){
            sum = sum + i ;
            
            
        }
    }
    printf("%d",sum);
    return 0 ;
}
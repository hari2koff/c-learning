/******************************************************************************
              Q. Product of Even Numbers
Scenario: A calculator program receives n and multiplies all even numbers
from 2 through n. Display the final product.
   
*******************************************************************************/

#include <stdio.h>

int main () {
    int n,pro ;
    scanf("%d",&n);
    pro = 1 ;
    
    for (int i = 1 ; i <= n ; i ++) {
        if (i%2 == 0 ){
            pro = pro*i ;
        }
    }

    printf("%d",pro);
    return 0 ;
}
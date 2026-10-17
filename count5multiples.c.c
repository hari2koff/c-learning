/******************************************************************************

                        8. Count Multiples of 5
Scenario: A shop checks product IDs from 1 to n. Count how many IDs 
are divisible by 5.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,sum ;
    scanf("%d",&n);
    sum = 0 ;
    for (int i = 1 ; i<=n ; i ++ ){
        
        if (i % 5 == 0){
            sum++; ;
        }
    }
    printf("%d",sum);

    return 0;
}
/******************************************************************************

             Q. Sum of Positive Values
Scenario: A data-entry program receives n integers. Some values may be
negative. Calculate the sum of only the positive values.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,m;
    int sum = 0 ;
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++) {
        scanf("%d",&m);
        if(m > 0) {
            sum = sum + m ;
        }
        
    }
    printf("%d",sum);
    return 0;
}
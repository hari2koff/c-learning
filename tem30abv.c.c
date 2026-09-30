/******************************************************************************

              Q. Count Numbers Above a Limit
Scenario: A temperature-monitoring system records n temperature readings. 
Count how many readings are greater than 30 degrees.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,temp,c ;
    c = 0 ;
    scanf("%d",&n);
    
    for (int i = 1 ; i <= n ; i ++){
        scanf("%d",&temp);
        if (temp> 30 ){
            c ++ ;
        }
    }
    printf("Reading above 30: %d",c);
    return 0;
}
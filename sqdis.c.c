/******************************************************************************

             Q. Display Squares
Scenario: A learning application wants to display the square of every 
integer from 1 to n. Print the number and its square on each line.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n ;
    
    scanf("%d",&n);
    
    for (int i = 1 ; i <= n ; i++){
        printf("%d sq = %d\n",i,i*i);
    }
    
    return 0;
}
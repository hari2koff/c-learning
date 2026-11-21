// Challenge 1 — Reverse and Add Until Palindrome
/*Explanation:
- 87+78=165
- 165+561=726
- 726+627=1353
- 1353+3531=4884
- 4884 is a palindrome, so stop*/
#include<stdio.h>
int revNum (int);

int main () {
    int n ; 
    scanf("%d",&n);
    
    while(1){
        int sum = n + revNum(n) ;
        printf("%d",sum);
        n = sum ; 
        if(sum == revNum(sum)){
            break ;
        }else{
            printf(" -> ");
        }
        
    }
    
    
    return 0 ;
}

int revNum (int n){
    int rev = 0 ;
    while(n!=0){
        rev = rev*10 + (n%10) ;
        n /= 10 ;
        
    }
    return rev ;
}
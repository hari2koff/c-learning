#include<stdio.h>
int main () {
    int n, m ;
    scanf("%d %d",&n,&m);
    int min = n ;
    if(m < min){
        min = m ;
    }
    // LCM
    int min1 = min*min ;
    for(int i = 1 ; i <= min ; i++){
        for(int j = 0 ; j<= min ; j++){
            if(n*i == m*j){
                if(min1 > n*i){
                    min1 = n*i ;
                }
            }
        }
    }

    printf("%d",min1);


    return 0 ;
}
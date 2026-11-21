// To do list 


#include<stdio.h>
int main (){
    
    int exit = 0 ;
    int cho ;
    char task[100][20];
    char date[100][20];
    int r = 0 ;
    
    
    
    // For running till the user exits.
    while(!exit){
        scanf("%d",&cho);
        
        // Switch for casees
        switch(cho){
            case 1 :    // For entering tasks to do
                scanf(" %[^\n]",&task[r]);
                scanf(" %[^\n]",&date[r]);
                r++ ; 
                break;
            case 2 :    // For dsiplaying output 
                printf("===== TO-DO=====\n");
                for (int i = 0 ; i < r ; i++){
                    printf("\nTask %d: %s",i+1,task[i]);
                    printf("\nDue date: %s",date[i]);
                    printf("Status: Not Completed\n\n");          // Add function to make sure if the task done or not(status)
                    
                }
                break ;
            case 3 : 
                exit = 1 ;
                break ; 
                
            default :
                printf("Invalid choice");
                break;
                
        }
        
        
    }
    
    
    
    return 0 ;
    
}

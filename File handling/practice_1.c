#include <stdio.h>

int main (void) {
    char line [100];
    FILE *fp;
    fp = fopen("text.txt",w);

    fprintf(fp,"File handling is useful.\n");
    fclose(fp);

    // read input

    
    fscanf(fp," %[^\n]",line);
    printf("%s",line);

    return 0 ;

    

    

}
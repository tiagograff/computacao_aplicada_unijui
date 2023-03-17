#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
    FILE * arq;
    int num;
    arq = fopen("teste.txt","r");
    if (arq == NULL) 
    {
        printf("\nERRO!");
    }else{
        while ((fscanf(arq,"%d",&num))!=EOF)
        {
            printf("\n%d",num);
        }
    fclose(arq);
    }   
}
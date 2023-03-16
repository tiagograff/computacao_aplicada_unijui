#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
    FILE *arq;
    int vet[5],i;
    arq = fopen("teste.txt","w");
    for (i = 0; i < 5; i++)
    {
        printf("posicao %d: ",i);
        scanf("%d",&vet[i]);
    }if (arq==NULL)
    {
        printf("\nERRO");
    }else{
        for (i = 0; i < 5; i++)
        {
            printf("%d\n",vet[i]);
            fprintf(arq,"%d\n",vet[i]);
        }   
    }
    fclose(arq);
}
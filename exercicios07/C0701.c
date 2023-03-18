#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Elabore um algoritmo que efetue a leitura de 15 números inteiros, armazenando em um array
// (vetor). Logo após crie um arquivo e salve todos os números do array neste arquivo, um número
// em cada linha.
main(){
    FILE *arq;
    int vet[15],i;
    arq = fopen("num.txt","w");
    for (i = 0; i < 15; i++)
    {
        printf("posicao %d: ",i);
        scanf("%d",&vet[i]);
    }if (arq==NULL)
    {
        printf("\nERRO");
    }else{
        for (i = 0; i < 15; i++)
        {
            printf("%d\n",vet[i]);
            fprintf(arq,"%d\n",vet[i]);
        }   
    }
    fclose(arq);
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Faça um programa que leia 20 números inteiros, armazenando em um vetor. Depois salve todos os
// números PARES em um arquivo chamado PAR.TXT e os números ímpares em um arquivo
// IMPAR.TXT.
main(){
    FILE *par;
    FILE *impar;
    int vet[20],i;
    par = fopen("par.txt","w");
    impar = fopen("impar.txt","w");
    for (i = 0; i < 20; i++)
    {
        printf("posicao %d: ",i);
        scanf("%d",&vet[i]);
    }if (par==NULL)
    {
        printf("\nERRO");
    }else{
        for(i=0; i<20; i++){
           if(vet[i]%2==0){
               printf("Par: %d\n",vet[i]);
               fprintf(par,"%d\n",vet[i]);
           }else{
               printf("Impar: %d\n",vet[i]);
               fprintf(impar,"%d\n",vet[i]);
           } 
        }
    }
    fclose(par);
    fclose(impar);
}

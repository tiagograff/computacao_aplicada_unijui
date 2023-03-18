#include<stdio.h>
#include<conio.h>
#include<ctype.h>
//Escreva um programa que leia do teclado 10 valores inteiros, armazenando em um vetor. Depois mostre
//na tela os números lidos na ordem em que foram digitados e na ordem inversa de digitação.
main(){
    int vetor [10], vetorInvert[10],i,j;
    //ler vetor
    for (i = 0; i < 10; i++)
    {
        printf("numero %d: ",i);
        scanf("%d",&vetor[i]);
    }
    //mostar vetor
    for (j = 0; j < 10; j++)
    {
        printf("%d-",vetor[j]);
    } 
    printf("\ninvertido:\n");
    //valor invertido
    for(i=0, j = 9; i<10 && j >= 0; i++, j-- ) 
    {
        vetorInvert[i] = vetor[j];
        printf("%d-", vetorInvert[i]);
    }
    return 0;
}
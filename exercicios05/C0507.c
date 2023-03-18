#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Crie um algoritmo que peça para o usuário 15 números, armazenando em um vetor. Depois mostre na
// tela o MAIOR e o MENOR número informado.

main(){

    int vetor[15],i,maior,menor;
    for (i = 0; i < 15; i++)
    {
        printf("digite o valor da posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for (i = 0; i < 15; i++)
    {
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
}
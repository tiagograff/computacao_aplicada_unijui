#include<stdio.h>
#include<conio.h>
#include<ctype.h>
//Crie um programa que peça para o usuário 6 valores, armazenando em um vetor. Depois mostre a média
//dos valores lidos.
main(){
    int i,vetor[6],media;
    int soma = 0;
    for (i = 0; i < 6; i++)
    {
        printf("numero %d: ",i);
        scanf("%d",&vetor[i]);
        soma = (vetor[i] + soma);
    }
    printf("\na soma dos valores do vetor eh de %d",soma);
    media = (soma/6);
    printf("\na media desta soma eh de: %d",media);
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Faça um programa que peça para o usuário 10 números inteiros. Crie 2 vetores, um que armazene os
// valores PARES e outro que armazene os valores IMPARES digitados. Mostre os 2 arrays criados.
main(){
    int i,par[10],impar[10],x[10],tamanhoPar,tamanhoImpar;
    tamanhoPar = 0;
    tamanhoImpar = 0;
    for (i = 0; i < 10; i++)
    {
        printf("digite o valor da posicao %d: ",i);
        scanf("%d",&x[i]);
        if (x[i]%2==0)
        {
            par[tamanhoPar] = x[i];
            tamanhoPar++; 
        }else{
            impar[tamanhoImpar] = x[i];
            tamanhoImpar++;
        }     
    }
    printf("vetor par: ");
    for (i = 0; i < tamanhoPar; i++)
    {
        printf("|%d", par[i]);
    }
    printf("\nvetor impar: ");
    for (i = 0; i < tamanhoImpar; i++)
    {
        printf("|%d", impar[i]);
    }

}
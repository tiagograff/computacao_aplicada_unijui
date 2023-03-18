#include<stdio.h>
#include<conio.h>
#include<ctype.h>
//Escreva um programa que leia os elementos de uma matriz, tipo inteiro, tamanho 4x4. Escreva a matriz
//na tela. Depois mostre quais os elementos da diagonal principal.
main(){
    int mat[4][4], i,j;
    //ler matriz
    printf("\nMatriz");
    for (i = 0; i < 4; i++)
    {
        printf("\nLinha %d: ",i);
        for (j = 0; j < 4; j++)
        {
            printf(" Coluna %d: ",j);
            scanf("%d",&mat[i][j]);
        }     
    }
    //mostra matriz
    printf("\n Matriz Digitada");
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            if(i==j)
            printf("\t%d",mat[i][j]);
        }       
    }   
}
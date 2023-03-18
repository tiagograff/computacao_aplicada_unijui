#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Faça um algoritmo que peça para o usuário os elementos de uma matriz, tipo inteiro, tamanho 3x4.
// Escreva a matriz original na tela. Depois crie uma matriz transposta em relação à primeira.
main(){
    //variaveis
    int mat[3][4], i, j;
//le matriz
    printf("\n Matriz");
    for (i = 0; i<3; i++){
        printf("\n Linha %d", i);
        for (j=0; j<4; j++){
            printf(" Coluna %d ", j);
            scanf("%d", &mat[i][j]);
        }
    }
//mostrar matriz original 
    printf("\n Original:");
    for (i=0; i<3; i++){
        printf("\n");
        for (j = 0; j < 4 ; j++){
            printf("\t %d", mat[i][j]);
        }
    }
//matriz transposta
    printf("\n Trasposta:");
    for (j=0; j<4; j++){
        printf("\n");
        for (i = 0; i < 3; i++){
            printf("\t %d", mat[i][j]);
        }
    }
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
//Faça um algoritmo que peça para o usuário os elementos de uma matriz, tipo inteiro, tamanho 4x3 e
//uma variável do tipo inteiro. Escreva a matriz original na tela. Depois multiplique a matriz pela variável
//criada e mostre o resultado.
main(){
    int mat[4][3], i, j, x;
    //le matriz
    printf("\n Matriz");
    for (i = 0; i<4; i++){
        printf("\n Linha %d", i);
        for (j=0; j<3; j++){
            printf(" Coluna %d ", j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite um numero inteiro:\n");
    scanf("%d", &x);
    //mostrar matriz
    printf("\n Matriz multiplicada pelo inteiro digitado:");
    for (i=0; i<4; i++){
        printf("\n");
        for (j = 0; j < 3 ; j++){
            printf("\t %d", mat[i][j]*x);
        }
    }   
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Faça um programa que peça para o usuário os elementos de uma matriz, tipo inteiro, tamanho 4x5.
// Escreva a matriz original na tela. Depois crie um vetor que armazene o maior número de cada linha da
// matriz. Mostre este vetor.
main(){
        //variaveis
    int mat[4][5], i, j,maior[4];
//le matriz
    printf("\n Matriz");
    for (i = 0; i<4; i++){
        printf("\n Linha %d", i);
        for (j=0; j<5; j++){
            printf(" Coluna %d ", j);
            scanf("%d", &mat[i][j]);
        }
    }
//mostrar matriz original 
    printf("\n Original:");
    for (i=0; i<4; i++){
        printf("\n");
        for (j = 0; j < 5 ; j++){
            printf("\t %d", mat[i][j]);
        }
    }
//maior 
    
    for (i=0; i<4; i++){
        maior[i] = mat[i][0];
        for (j=0; j<5; j++){
            if (mat[i][j] > maior[i]){
            maior[i] = mat[i][j];
            }
        }
        printf("\no maior valor da linha %d eh: %d\n",i,maior[i]);
    }
}
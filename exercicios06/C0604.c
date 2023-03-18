#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Crie um algoritmo que peça para o usuário os elementos de uma matriz, tipo inteiro, tamanho 3x5.
// Escreva a matriz original na tela. Depois diga quantos elementos PARES e quantos ÍMPARES fazem parte
// desta matriz.

main(){
//variaveis
    int mat[3][5], i, j, x;
//le matriz
    printf("\n Matriz");
    for (i = 0; i<3; i++){
        printf("\n Linha %d", i);
        for (j=0; j<5; j++){
            printf(" Coluna %d ", j);
            scanf("%d", &mat[i][j]);
        }
    }
//mostrar matriz original 
    printf("\n Matriz multiplicada pelo inteiro digitado:");
    for (i=0; i<3; i++){
        printf("\n");
        for (j = 0; j < 5 ; j++){
            printf("\t %d", mat[i][j]);
        }
    }
//impar ou par
    for(i=0; i<3; i++){
        for(j=0; j<5;j++){
           if(mat[i][j]%2==0){
               printf("Par: %d\n",mat[i][j]);
           }else{
               printf("Impar: %d\n",mat[i][j]);
           } 
        }
    }
}

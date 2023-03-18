#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Crie um algoritmo que peça para o usuário os elementos de uma matriz, tipo inteiro, tamanho 5x5.
// Escreva a matriz original na tela. Depois multiplique os elementos da diagonal secundaria por 3, movendo
// zeros para os demais elementos.
main(){
//variaveis
    int mat[5][5], i, j;
//le matriz
    printf("\n Matriz");
    for (i = 0; i<5; i++){
        printf("\n Linha %d", i);
        for (j=0; j<5; j++){
            printf(" Coluna %d ", j);
            scanf("%d", &mat[i][j]);
        }
    }
//mostrar matriz original 
    printf("\n Original:");
    for (i=0; i<5; i++){
        printf("\n");
        for (j = 0; j < 5 ; j++){
            printf("\t %d", mat[i][j]);
        }
    }
//calcula
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if(i==j){
            mat[i][j] = mat[i][j]*3;
            }else{
                mat[i][j] = 0;
            }  
        }
    }
    printf("\n Matriz Calculada");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {    
            printf("\t%d",mat[i][j]);
        }       
    } 
}
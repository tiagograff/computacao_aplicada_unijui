#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Crie um programa que peça para o usuário os elementos de uma matriz, tipo inteiro, tamanho 3x3 e
// escreva esta matriz na tela. Depois multiplique a matriz por 2 e mostre o resultado.
main(){
    int mat[3][3], i,j,x;
    //ler matriz
    printf("\nMatriz");
    for (i = 0; i < 3; i++)
    {
        printf("\nLinha %d: ",i);
        for (j = 0; j < 3; j++)
        {
            printf(" Coluna %d: ",j);
            scanf("%d",&mat[i][j]);
        }     
    }
    //mostra matriz
    printf("\n Matriz Digitada");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {    
            printf("\t%d",mat[i][j]);
        }       
    } 

//calcula
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            mat[i][j] = mat[i][j]*2;
        }
    }
    printf("\n Matriz Calculada");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            
            printf("\t%d",mat[i][j]);
        }       
    }  
}
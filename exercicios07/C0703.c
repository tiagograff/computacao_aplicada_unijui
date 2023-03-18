#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Crie um algoritmo que leia uma matriz quadrada de ordem 5. Depois salve o DOBRO dos elementos
// da Diagonal Principal em um arquivo chamado PRINC.TXT e o TRIPLO dos elementos da Diagonal
// Secundária em um arquivo chamado SECUN.TXT.

main(){
    FILE *principal;
    FILE *secundaria;
    principal = fopen("principal.txt","w");
    secundaria = fopen("secundaria.txt","w");
    int mat[2][2], i,j;
//ler matriz
    printf("\nMatriz");
    for (i = 0; i < 2; i++)
    {
        printf("\nLinha %d: ",i);
        for (j = 0; j < 2; j++)
        {
            printf(" Coluna %d: ",j);
            scanf("%d",&mat[i][j]);
        }     
    }
    if (principal==NULL)
    {
        printf("\nERRO");
    }else{
        printf("\n Matriz Principal");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            if (i==j)
            {
                 printf("\t%d",mat[i][j]*2);
                 fprintf(principal,"%d\n",mat[i][j]*2);
            }  
        }       
    }  
    printf("\n Matriz Secundaria");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            if (i+j==1)
            {
                 printf("\t%d",mat[i][j]*3);
                 fprintf(secundaria,"%d\n",mat[i][j]*3);
            }  
        }       
    } 
    }
}

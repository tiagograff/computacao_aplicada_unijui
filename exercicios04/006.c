#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
    int mat[4][3], i,j;
    //ler matriz
    printf("\nMatriz");
    for (i = 0; i < 4; i++)
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
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            //if(i==j)
            printf("\t%d",mat[i][j]);
        }
        
    }
    
}
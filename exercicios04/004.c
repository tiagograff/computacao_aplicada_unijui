#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

main(){
    int N [5], i;
    //ler vetor
    for (i = 0; i < 5; i++)
    {
        printf("numero %d: ",i);
        scanf("%d",&N[i]);
    }
    //mostar vetor
    for (i = 0; i < 5; i++)
    {
        printf("\n%d - %d",i,N[i]);
    } 
}
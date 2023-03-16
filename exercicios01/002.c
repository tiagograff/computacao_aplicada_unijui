#include <stdio.h>
#include <conio.h>
#include <math.h>
//Faça um algoritmo, em C, que leia dois valores inteiros (A e B) e troque o conteúdo dessas variáveis.
//Depois mostre as duas variáveis com os valores já trocados.

main(){

    int x, a, b;

    printf("entre com o valor de A: ");
    scanf("%d",&a);
    printf("entre com o valor de B: ");
    scanf("%d",&b);

    x = a;
    a = b;
    b = x;

    printf("agora o valor de A eh: %d e o de B eh: %d",a,b);

}
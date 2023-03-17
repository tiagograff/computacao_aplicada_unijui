#include <stdio.h>
#include <conio.h>
#include <math.h>
//Escreva um programa que leia um número qualquer, e escreva sua TABUADA na tela.
main(){

    int i,x,num;
    printf("entre com o numero: ");
    scanf("%d",&num);
    for (i = 0; i <= 10; i++)
    {
        x = (num*i);
        printf("%dX%d=%d\n",num,i,x);
    } 

}
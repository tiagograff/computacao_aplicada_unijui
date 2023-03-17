#include <stdio.h>
#include <conio.h>
#include <math.h>
//Escreva um programa que leia uma variável 5 vezes, mostrando, no final, a soma obtida.
main(){

    int i = 0;
    int x = 0;
    int total = 0;

    for (int i = 0; i < 5; i++){
        printf("digite um numero inteiro: ");
        scanf("%d", &x);
        total = x + total;
    }

    printf("a soma obtida eh %d", total);
}
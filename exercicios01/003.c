#include <stdio.h>
#include <conio.h>
#include <math.h>
//Crie um programa que leia dois números reais e calcule a SOMA, PRODUTO e MÉDIA entre esses
//números.

main(){

float soma, produto, media, x, y;

printf("entre com o primeiro valor: ");
scanf("%f", &x);
printf("entre com o segundo valor: ");
scanf("%f", &y);

soma = x + y;
produto = x * y;
media = (x + y)/2;

printf("a soma eh: %0.2f, o produto eh: %0.2f e a media eh: %0.2f",soma,produto,media);

}
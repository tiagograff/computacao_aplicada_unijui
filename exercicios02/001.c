#include <stdio.h>
#include <conio.h>
#include <math.h>
//Escreva um programa que receba dois números e, utilizando funções, calcule a média e retorne o
//resultado, mostrando na tela com duas casas depois da vírgula.

media(float x, float y){
    float z = (x+y)/2;
    return z;
}

main(){

float x, y;
printf("entre com o primeiro valor: ");
scanf("%f", &x);
printf("entre com o segundo valor: ");
scanf("%f", &y);

float valorMedia = media(x,y);

printf("a media entre esses valores eh de: %f", valorMedia);
}
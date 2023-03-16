#include <stdio.h>
#include <conio.h>
#include <math.h>
//Faça um programa que calcule o perímetro de um retângulo, sendo dado o comprimento e a largura
//desse retângulo: P = 2x(c+l)

main(){

    int P,c,l;
    printf("diga o cumprimento do retangulo: ");
    scanf("%d",&c);
    printf("diga o cumprimento da largura: ");
    scanf("%d",&l);
    P = (2*(c+l));
    printf("o resultado eh: %d",P);
    
}
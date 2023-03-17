#include <stdio.h>
#include <conio.h>
#include <math.h>
//Faça um programa que determine o volume de uma esfera, através da leitura do raio:
// V = 4/3 (PI*R^3)

main(){

float V, pi, r;
pi = 3.14;

printf("entre com o valor do raio: ");
scanf("%f", &r);

V = ((pi*(pow(r,3)))*4/3);

printf("o volume dessa esfera eh de: %0.2f", V);

}
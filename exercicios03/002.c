#include <stdio.h>
#include <conio.h>
#include <math.h>
//Faça um algoritmo, em C, que leia três números e identifique qual o MAIOR, escrevendo este numero na
//tela.
int main(){
    int a,b,c;
    printf("digite tres numeros\no primeiro: ");
    scanf("%d",&a);
    printf("o segundo: ");
    scanf("%d",&b);
    printf("o terceiro: ");
    scanf("%d",&c);

    if (a > b && a > c){
        printf("o valor %d eh o maior",a);
    }
    else if (b > a && b > c){
        printf("o valor %d eh o maior",b);
    }
    else if (c > b && c > a){
        printf("o valor %d eh o maior",c);
    }
    else{
        printf("os tres numeros são iguais");
    }
    
}
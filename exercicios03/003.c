#include <stdio.h>
#include <conio.h>
#include <math.h>
//Crie um algoritmo, em C, que leia dois números e, utilizando uma função, apresente na tela em ordem
//CRESCENTE.
ordernar(int x, int y){
    if (x > y){
        printf("-> %d -> %d", y, x);
    }else if (x < y){
        printf("-> %d -> %d", x, y);
    }else{
        printf("os numeros sao iguais");
    }
}
main(){
    int x,y;
    printf("entre com um numero ");
    scanf("%d",&x);
    printf("entre com outro numero ");
    scanf("%d", &y);
    ordernar(x,y);
}
#include <stdio.h>
#include <conio.h>
#include <math.h>
//Crie um algoritmo em C que leia um número qualquer, e calcule seu FATORIAL.
main(){
int fat, n,i;
    printf("insira um valor: ");
    scanf("%d", &n);
    i = n;
    for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;     
    }
    printf("%d! = %d",i,fat);
}
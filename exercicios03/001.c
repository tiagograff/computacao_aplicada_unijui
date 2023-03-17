#include <stdio.h>
#include <conio.h>
#include <math.h>
//Escreva um programa que leia um número digitado pelo usuário e identifique se este número é PAR ou
//IMPAR.

main(){
    int num;
    printf("indique um numero: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("este numero eh par");
    }else{
        printf("este numero eh impar");
    }  
}
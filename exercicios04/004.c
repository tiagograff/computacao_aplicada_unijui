#include <stdio.h>
#include <conio.h>
#include <math.h>
//Crie um algoritmo que, através de um laço de repetição, leia um número qualquer, realizando uma soma
//entre todos os valores digitados, encerrando quando o usuário informar um número NEGATIVO.

main(){
     int num;
     int soma = 0;
    do{
        printf("digite um numero: ");
        scanf("%d",&num);
        soma = soma + num;
        if(num>=0){
            printf("soma %d\n",soma);
            continue;
        }  
    }while (num>=0);
}
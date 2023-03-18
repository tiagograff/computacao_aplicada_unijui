#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Crie um algoritmo que leia um vetor com 8 posições. Depois leia dois números inteiros, que referenciem
// uma das 8 posições (para isso o valor deve ser menor ou igual a 8, e os números não devem ser iguais).
// Mostre na tela a soma dos números armazenados nas 2 posições solicitadas.
main(){
    int vetor[8],i,num1,num2,soma;
    for (i = 0; i < 8; i++)
    {
        printf("digite o valor da posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }

    for (i = 0; i < 8; i++)
    {
        printf("|%d", vetor[i]);
    }

    printf("escolha um posicao do vetor: ");
    scanf("%d",&num1);
    
    printf("entre com um segundo valor, mas nao pode ser o mesmo que o anterior: ");
    scanf("%d",&num2);

    if(num1 == num2)
    {
        printf("ERROR: escolha de posicao reptida. tente novamente");
    }else if (num1 > 7 || num2 > 7 || num1 < 0 || num2 < 0)
    {
       printf("os valores nao sao compativeis com as posicoes do vetor. tente novamente");
    } else{
        soma = (vetor[num1] + vetor[num2]);
    } 
    printf("a soma dos valores das posicoes escolhidas eh de = %d",soma);
}
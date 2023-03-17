#include <stdio.h>
#include <conio.h>
#include <math.h>
//Crie um programa que solicite dois números quaisquer. Realize a operação de SOMA entre estes
//números. Mostre a resposta da soma através de função. Caso esta soma resulte em um valor maior que 10,
//adicione mais 5 no valor da soma, caso contrário subtraia 3 do resultado.
mensagemDeSoma(int soma){
    printf("a soma eh: %d\n",soma);
}

main(){
    int x,y,soma;
    printf("entre com um numero ");
    scanf("%d",&x);
    printf("entre com outro numero ");
    scanf("%d",&y);
    soma = (x+y);
    mensagemDeSoma(soma);
    if (soma > 10)
    {
        soma = (soma + 5);
    }else
    {
        soma = (soma - 3);
    }
    mensagemDeSoma(soma); 
}
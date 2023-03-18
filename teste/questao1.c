#include <stdio.h>
#include <conio.h>
#include <math.h>
/*Baseado nos anos de vida de Coulomb, crie um algoritmo, em C, que leia um ano qualquer posterior
a 1757 (caso seja digitado um ano que não satisfaça essa condição, deve ser solicitado novamente,
através de um laço de repetição) e faça um laço de repetição que liste na tela e grave em um arquivo
qualquer todos os anos entre o nascimento de Coulomb (1736) até o ano informado, de forma
CRESCENTE*/
main(){
    int i=0, anoUser;
    for (i = 0; i <= 1;)
    {
        printf("entre com um ano posterior ao de 1757: ");
        scanf("%d",&anoUser);
        if (anoUser >= 1757){
            printf("ERRO! ano invalido");
        }else{
            i = 1;
            break;
        }
    } 
}
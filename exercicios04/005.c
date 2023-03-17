#include <stdio.h>
#include <conio.h>
#include <math.h>
/*Faça um algoritmo que receba 2 números quaisquer e mostre para o usuário um menu com opções de
escolha:
OPÇÃO OPERAÇÃO
  1 | SOMA
  2 | SUBTRAÇÃO
  3 | DIVISÃO
  4 | MULTIPLICAÇÃO
Após a escolha da operação, realize o cálculo e mostre o resultado.*/
main(){
    int x,y,r,i;
    printf("digite dois numeros: ");
    scanf("%d",&x);
    printf("digite o outro numero: ");
    scanf("%d",&y);
    printf("agora selecione o numero para:\n 1 - SOMA\n 2 - SUBTRACAO\n 3 - DIVISAO\n 4 - MULTIPLICACAO\n");
    printf("digite o numero correspondente: ");
    scanf("%d",&r);
    
    switch (r)
        {
        case 1:
            i = (x+y);
            printf("a soma dos dois numeros eh: %d",i);
            break;
        
        case 2:
        i = (x-y);
            printf("a subtracao dos dois numeros eh: %d",i);
            break;
        
        case 3:
        i = (x/y);
            printf("a divisao dos dois numeros eh: %d",i);
            break;
        
        case 4:
        i = (x*y);
            printf("a multiplicacao dos dois numeros eh: %d",i);
            break;
        
        default:
            printf("esse numero nao esta disponivel, tente novamente");
            break;
    }
    
}
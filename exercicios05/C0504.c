#include<stdio.h>
#include<conio.h>
#include<ctype.h>

//Faça um algoritmo que crie um array (vetor) com o nome de A, armazenando 8 números inteiros. O
//algoritmo deve executar as seguintes ações:
// a) Atribua os seguintes valores iniciais: 1,0,5,-2,8,-5,9,-1;
// b) Faça uma soma com os valores das posições A[0], A[4] e A[7], mostrando a resposta na tela;
// c) Modifique o vetor na posição 4, atribuindo o valor 50;
// d) Mostre na tela o vetor final, com cada posição em uma nova linha.

main(){
    int soma,i;
    int A[8] = {1,0,5,-2,8,-5,9,-1};

    soma = (A[0] + A[4] + A[7]);
    printf("a soma das posicoes 0, 4 e 7 eh = %d\n",soma);

    A[4] = 50;

    printf("o vetor eh: ");

    for (i = 0; i < 8; i++)
    {
        printf("|%d", A[i]);
    }
    
}
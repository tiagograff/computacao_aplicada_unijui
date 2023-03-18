#include<stdio.h>
#include<conio.h>
#include<ctype.h>
// Faça um programa que peça para o usuário os elementos de uma matriz de string, para armazenar 10
// nomes com tamanho máximo de 20 caracteres. Escreva a matriz na tela.
int main(){
    char strings [10][20];
    int count;
    for (count = 0; count < 10; count++)
    {
        printf("Digite o %d nome: ",count);
        gets(strings[count]);
    }
    printf("\nAs strings que voce digitou foram:\n");
    for (count = 0; count < 10; count++)
    {
        printf("%s\n",strings[count]);
    }
    return;
}
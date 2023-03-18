#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
//faça um programa que leia o nome e o sobrenome de uma pessoa
//escreva na mesma linha as informações na tela com a primeira 
//letra em maiúsculo
main(){

    char nome[50];
    char sobrenome[75];
        
    printf("Nome: ");
    gets(nome);
    nome[0]= toupper(nome[0]);
                
    printf("Sobrenome: ");
    gets(sobrenome);
    sobrenome[0]= toupper(sobrenome[0]);
        
    printf("Informacoes: %s %s", nome, sobrenome);
}
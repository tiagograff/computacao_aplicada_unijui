#include <stdio.h>
#include <conio.h>
#include <math.h>
//Crie um algoritmo, em C, que calcule o número de eleitores do município, se baseando no número de
//votos brancos, nulos e válidos. Faça uma função para cada solicitação.
//Calcular e escrever o percentual que cada número de votos representa em relação ao total de eleitores 
//também através de funções.

votosBrancos(){
    int brancos;
    printf("qual foi a quantidade de votos brancos? \n");
    scanf("%d",&brancos);
    return brancos;
}

votosNulos(){
    int nulos;
    printf("qual foi a quantidade de votos nulos? \n");
    scanf("%d",&nulos);
    return nulos;
}

votosValidos(){
    int validos;
    printf("qual foi a quantidade de votos validos? \n");
    scanf("%d",&validos);
    return validos;
}

float porcentagem(float total, float voto){
    float prc = ((voto/total)*100);
    return prc;
}

main(){
    int vtBranco = votosBrancos();
    int vtNulo = votosNulos();
    int vtValido = votosValidos();
    float total = (vtBranco+vtNulo+vtValido);
    float prcBranco = porcentagem(total,vtBranco);
    float prcNulo = porcentagem(total,vtNulo);
    float prcValido = porcentagem(total,vtValido);

    printf("a porcetagem de votos de:\nbrancos:%0.2f%%\nnulos:%0.2f%%\nvalidos:%0.2f%%\n",prcBranco, prcNulo, prcValido);
    
}
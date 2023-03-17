#include <stdio.h>
#include <conio.h>
#include <math.h>
//Faça um algoritmo, em C, que leia um número inteiro e calcule o quadrado e o cubo deste número
//através de funções.

quadrado(int x){
    int y = pow(x,2);
    return y;
}
cubo(int x){
    int y = pow(x,3);
    return y;
}

main(){
    int x,rq,rc;
    printf("entre com um numero: ");
    scanf("%d",&x);
    rq = quadrado(x);
    rc = cubo(x);
    printf("o quadrado eh %d e o cubo eh %d",rq,rc);
}
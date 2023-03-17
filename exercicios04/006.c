#include <stdio.h>
#include <conio.h>
#include <math.h>
//Crie um programa, em C, que eleve ao quadrado os números PARES, e ao CUBO os números ÍMPARES no
//intervalo de 1 a 30.

main(){
int num, res;
for (int i = 1; i <= 30; i++)
{
    if (i%2==0){
        res = (i*i);
        printf("%d\n",res);
    }else{
        res = pow(i,3);
        printf("%d\n",res);
    }
}
}
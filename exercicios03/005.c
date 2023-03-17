#include <stdio.h>
#include <conio.h>
#include <math.h>
//entre com três números e dica qual é o maior e qual é o menor valor
main(){
int a,b,c;
printf("Digite um numero");
scanf("%d",&a);
printf("Digite outro numero");
scanf("%d",&b);
printf("Digite outro numero");
scanf("%d",&c);

if (a > b && a > c){
    printf("%d eh maior",a);
}else if (b > a && b > c){
    printf("%d eh maior",b);
}else if (c > a && c > b){
    printf("%d eh maior",c);
}else{
    printf("nao ha um valor maior");
}

if (a < b && a < c){
    printf("%d eh menor",a);
}else if (b > a && b > c){
    printf("%d eh menor",b);
}else if (c > a && c > b){
    printf("%d eh menorr",c);
}else{
    printf("nao ha um valor menor");
}
}
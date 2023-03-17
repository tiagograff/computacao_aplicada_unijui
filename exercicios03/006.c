#include <stdio.h>
#include <conio.h>
#include <math.h>
//entre com 3 numeros e dica quais são os negativos e quais são os positivos
main(){
    float a,b,c,p,n;
    printf("entre com um numero\n");
    scanf("%f",&a);
    if (a>0){
        n++;
    }else{
        p++;
    }
    printf("entre com um numero\n");
    scanf("%f",&b);
    if (b>0){
        n++;
    }else{
        p++;
    }
    printf("entre com um numero\n");
    scanf("%f",&c);
    if (c>0){
        n++;
    }else{
        p++;
    }

    printf("o numero de positivos eh %0.2f e de positivos %0.2f",p,n);
}
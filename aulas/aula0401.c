#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
    int idade;
    printf("entre com uma idade: ");
    scanf("%d",&idade);
    if (!(idade >17)){
        printf("Pronto para o exame!");
    }else{
        printf("erro!");
    }
    //
    int cont,a;
    for (cont = 1;cont <= 5;cont++){
        printf("teste\n");
        scanf("%d", &a);
    }
    //
    int num;
    do{
        printf("numero positivo: ");
        scanf("%d",&num);
    }while (num<0);
}
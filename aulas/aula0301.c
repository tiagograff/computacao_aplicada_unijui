#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
int num;
printf("Digite sua nota ");
scanf("%d",&num);
if (num >= 60){
    printf("Voce esta aprovado!\n");
}else{
    printf ("\nVoce esta reprovado!");
}
getch();
return(0);

int c,b;
b = c = 5;
printf("%d\n",c);
printf("%d\n",c++);
printf("%d\n",c);

printf("%d\n",b);
printf("%d\n",++b);
printf("%d\n",b);

system("PAUSE");
}

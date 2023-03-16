/*utilize o exemplo e crie mais uma função  que calcule o CUBO do número informado 
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void square(int x) {
        printf("O quadrado e %d\n",(x*x)); 
}

void cube(int y) {
        int z = pow(y,3);
        printf("O cubo e %d\n",z); 
}

int soma (int a, int b){
        int c = a+b;
        return(c);
}

int main(){
        int num;
        printf("Entre com o numero\n");
        scanf("%d",&num);
        printf("\n");
        square(num);
        cube(num);
        getch();  

        int a,b,z;

        printf("digite um numero\n");
        scanf("%d",&a);
        printf("digite outro um numero\n");
        scanf("%d",&b);
        z = soma(a,b);
        printf("A soma dos numeros eh %d\n",z);
}
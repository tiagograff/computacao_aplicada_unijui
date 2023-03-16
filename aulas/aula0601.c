#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    char strings [5][100];
    int count;
    for (count = 0; count < 5; count++)
    {
        printf("\nDigite uma string: ");
        gets(strings[count]);
    }
    printf("\nAs strings que voce digitou foram:\n");
    for (count = 0; count < 5; count++)
    {
        printf("%s\n",strings[count]);
    }
    return;
}
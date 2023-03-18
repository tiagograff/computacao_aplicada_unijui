#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
    /*De acordo com os trabalhos feitos por Coulomb do equilíbrio de torção, faça um algoritmo que peça
    ao usuário 10 nomes de materiais utilizados e cada medição correspondentes. Crie 2 arquivos para
    gravação, um para os nomes e outro para as medições. Cada material e medição que o usuário
    informar, deve ser armazenado em seu respectivo arquivo.  */
    FILE *arqMaterial;
    FILE *arqMedicamento;
    char material[30],medicamento[30];
    int i;
    arqMaterial = fopen("material.txt","w");
    // arqMaterial = fopen("medicamento.txt","w");
    for (i = 0; i < 10; i++)
    {
        printf("%d: ",i);
        scanf("%s",&material[i]);
    }if (arqMaterial==NULL)
    {
        printf("\nERRO");
    }else{
        for (i = 0; i < 10; i++)
        {
            printf("%s\n",arqMaterial[i]);
            fprintf(arqMaterial,"%s\n",material[i]);
        }   
    }
    fclose(arqMaterial);
    // fclose(arqMedicamento);
}
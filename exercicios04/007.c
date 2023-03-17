#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
    FILE *fp;
    fp = fopen("teste.txt","r");
    if (fp==NULL)
    {
        printf("Impossivel de abrir o arquivo \"texto.txt\"\n");
    }else{
        printf("Arquivo \"texto.txt\" aberto com sucesso!!!\n");
        fclose(fp);
    }
return(0);
}
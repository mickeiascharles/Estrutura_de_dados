#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt", "r");

    if(arq){
        while((c = getc(arq)) !=EOF){//get - caracter e End Of File
            printf("%c", c);
        }
    }else{
        printf("Arquivo não existe");
    }
    fclose(arq);
    return 0;
}
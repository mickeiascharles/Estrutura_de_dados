#include <stdio.h>
int main (){
FILE *arq;
arq = fopen("arquivo.txt", "w");

fclose(arq);
return 0;
}
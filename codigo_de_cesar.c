#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 256

int main(){

    char codigo [tam];

    printf("Insira uma palavra ou frase: ");
    fgets(codigo, tam, stdin);

    for (int i = 0; codigo[i]!='\0'; i++){

        if(codigo[i] >= 65 && codigo[i] <= 90 || codigo[i] >= 97 && codigo[i]<=122){

            codigo[i]+=3;
        }

    }

    printf("%s\n", codigo);

    return 0;
}
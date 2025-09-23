#include <stdio.h>
#include <stdlib.h>

/*
Programa que retorna a informacao que que o ano = bissexto
Condicoes: 
- De 400 em 400 anos = bissexto
- De 4 em 4 anos = bissexto
- De 100 em 100 anos nao e bissexto
*/


int main()
{
    int ano;
    printf("Escreva o ano para saber se e bissexto: \n");
    scanf("%d",&ano);
    if(ano%400==0 || ano%4==0 && ano%100!=0 ){
        printf("O ano %d e bissexto!",ano);
      }else{
         printf("O ano %d nao e bissexto!",ano);
    }

    return 0;
}

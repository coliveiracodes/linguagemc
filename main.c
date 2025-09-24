#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Escreva dois valores, para exibir os numeros pares entre eles:\n");
    printf("Escreva o primeiro valor: ");scanf("%d", &num1);
    printf("Escreva o segundo valor: ");scanf("%d", &num2);
    if(num1>num2){
        int num3;
        num3=num1; num2=num3; //fiz a troca dos valores com as variaveis a,b,c
    }
    if(num1%2 !=0){
        num1++;
    }
    for(int i = num1; i <= num2; i+=2){   //reduzi o código para 1 ciclo for
        printf("%d \n", i);
     }
    return 0;
}

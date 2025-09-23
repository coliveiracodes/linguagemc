#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Programa Calculadora para testar uso de operacoes em linguagem C,
e o uso de condicionantes ifs e elses
*/


int main()
{
    setlocale(LC_ALL,"");
    printf("------------CALCULADORA-----------\n");
    int short operador=0;
    int n1,n2,resultado;
    printf("Escolha a operação desejada: \n 1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - divisao \n");
    scanf("%d", &operador);
    if(operador == 1){
        printf("Escreva o primeiro numero a somar: ");
        scanf("%d",&n1);
        printf("Escreva o segundo numero a somar: ");
        scanf("%d",&n2);
        resultado=n1+n2;
        printf("O resultado da soma de %d e %d é %d",n1,n2,resultado);
    } else if(operador == 2){
        printf("Escreva o primeiro numero a subtrair: ");
        scanf("%d",&n1);
        printf("Escreva o segundo numero a subtrair: ");
        scanf("%d",&n2);
        resultado=n1-n2;
        printf("O resultado da subtracao de %d e %d é %d",n1,n2,resultado);
    } else if(operador == 3){
        printf("Escreva o primeiro numero a multiplicar: ");
        scanf("%d",&n1);
        printf("Escreva o segundo numero a multiplicar: ");
        scanf("%d",&n2);
        resultado=n1*n2;
        printf("O produto da multiplicação de %d e %d é %d",n1,n2,resultado);
    } else if(operador == 4){
        printf("Escreva o primeiro numero a dividir: ");
        scanf("%d",&n1);
        printf("Escreva o segundo numero a dividir: ");
        scanf("%d",&n2);
        resultado=n1/n2;
        printf("O quociente da divisao de %d e %d é %d",n1,n2,resultado);
    } else{
        printf("Opcao invalida");
    }

    return 0;
}

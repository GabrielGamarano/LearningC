#include <stdio.h>
#include <conio.h>


int main(void) {
    printf("----Calculadora Simples em C----\n");
    //int num;
   int num1, num2, soma, mult, div, sub;
    printf("Escolha um numero: ");
    scanf("%d", &num1);
    printf("Escolha outro numero: ");
    scanf("%d", &num2);
    soma=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    printf("A soma dos numeros e %d\n", soma);
    printf("A Subtracao dos numeros e %d\n", sub);
    printf("A multiplicacao dos numeros e %d\n", mult);
    printf("A divisao dos numeros e %d\n", div);
    printf("---- Fim do Programa ----");
    printf(" ");
    system ("pause");
    return 0;
}
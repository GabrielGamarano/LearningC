#include <stdio.h>
#include <conio.h>

int main() {

    float nota1, nota2, nota3, nota4, mediaSimples;
    char nomeAluno [50];
    char sobreNomeAluno [50];

    // entrada de nome
    printf("-----Programa de Notas dos Alunos----");
    printf("Digite seu nome: \n");
    scanf("%s", &nomeAluno);
    printf("Digite seu Sobrenome: \n");
    scanf("%s", &sobreNomeAluno);

    // entrada das notas
    printf("Digite a nota da primeira prova: \n");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: \n");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova: \n");
    scanf("%f", &nota3);
    printf("Digite a nota da quarta prova: \n");
    scanf("%f", &nota4);

    // calculo media

    mediaSimples = (nota1 + nota2 + nota3 + nota4)/4;

    printf("Sua media foi: %f\n", mediaSimples);

    if(mediaSimples >= 7){
        printf("Parabens, voce foi aprovado!!\n");
    }else
    {
        printf("Reprovado!\n");
    }
    printf(" ");
    system("pause");    
    return 0;
}
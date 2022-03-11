#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(void) { 
    setlocale(LC_ALL,"portuguese"); // Altera a linguagem! OBS: IMPORTANTE PARA ACENTOS!!!!

    printf("*****************************************\n"); 
    printf("* Bem vindo ao nosso jogo de advinhação *\n"); 
    printf("*****************************************\n");

    int numerosecreto = 42;

    printf("O numero %d é o secreto. Não conta pra ninguem\n", numerosecreto);

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute); // Diferente do 'printf', o comando 'scanf' fara com que o usuario digite, não a maquina! 
    // No scanf sempre deve se usar um & antes da variavel!

    printf("Seu chute foi %d \n", chute);

    if (chute == numerosecreto)
    {
        printf("Isso meu numero é este mesmo!!! ");
    } else {
        printf("Esse não é o meu");
    }
} 



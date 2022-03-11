#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");

    printf("Olá, linguagem C");
}
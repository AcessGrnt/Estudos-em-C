#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");

    int primeiraVar, segundaVar;

    printf("*********************************\n");
    printf("*     TESTES MATEMATICOS!       *\n");
    printf("*    Escolha dois numeros!      *\n");
    printf("*     E direi o resultado       *\n");
    printf("*     ********************      *\n");
    printf("*     Diga o primeiro num:      *\n ===> ");
    scanf("%d", &primeiraVar);
    printf("*     Agora escolha outro:      *\n ===>");
    scanf("%d", &segundaVar);

    int resultado = primeiraVar * segundaVar;

    printf("*      Essa é facil! %d         *\n", resultado);
    printf("*********************************\n");

    system("pause");
    return(0);
}

/////////////////////////////////////////////////////////////////////////
// OUTRO CODIGO!

/* #include <stdio.h>

int main() {
  int x;
  int y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  int m = x * y;
  printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, m);
} */
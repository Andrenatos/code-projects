#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int num, x;
  int tent = 1;
  char s = 't';
  char acento_u = 163 ;
  char acento_u_grande = 233 ;
  char acento_e_grande = 144 ;

  srand(time(NULL));
  x = rand() % 100 + 1;

  printf("\n                   ESTOU A PENSAR NUM N%cMERO DE 1 a 100" , acento_u_grande );
  printf("\n                                  ADIVINHE !");

  do {
  printf("\n\n\nDigite um n%cmero: " , acento_u );
  scanf("%d", &num);
  
    if (num > x) {
      printf("\n\nO N%cMERO QUE PENSEI %c MENOR DO QUE %d", acento_u_grande , acento_e_grande , num);
    }
    else {
      if (num < x)
        printf("\n\nO N%cMERO QUE PENSEI %c MAIOR DO QUE %d", acento_u_grande , acento_e_grande , num);  
      else {
        printf("\n                              ACERTOU !!");
        printf("\n                           N%cmero de tentativas: %d", acento_u , tent);
        printf("\n                            O n%cmero era: %d", acento_u , x);
      }
    }
  
  tent++;
  } while (num != x && tent <= 20);

  if (tent > 20) {
    printf("\n\nUPS , ULTRAPASSOU O LIMITE DE TENTATIVAS ! TENTE OUTRA VEZ !");
    printf("\nO n%cmero era: %d", acento_u , x);
  } 

  return 0;

}

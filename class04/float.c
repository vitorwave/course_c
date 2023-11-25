#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
* %.xf (x = numero de casas decimais que deseja exibir)
*/
int main(void){
  float f = 1;
  double d = 1;
  long double ld = 1;

  printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);
  printf("O tamanho de d (double): %zu bytes / %zu bits\n", sizeof d, sizeof d * 8);
  printf("O tamanho de d (long double): %zu bytes / %zu bits\n", sizeof ld, sizeof ld * 8);

  printf("Valor de f: %.4f\n", f);
  return 0;
}

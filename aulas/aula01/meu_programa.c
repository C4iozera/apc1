#include <stdio.h>

int main() {
   float nota1 = 0;
  float nota2 = 0;

  printf("entre com a nota01:\n ");
  scanf("%f", &nota1);

  printf("entre com a nota02:\n ");
  scanf("%f", &nota2);

  float media = 0.4*nota1 + 0.6*nota2;
  if (media >= 5.0) {
    printf("mandou bem garotão\n");
    } else {
    printf("não foi dessa vez mon amie\n");
    }

  printf("a média final é %.1f\n ", media);

  return 0;
}
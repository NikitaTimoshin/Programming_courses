#include <stdio.h>

int main() {
  float A, B, S;

  printf("Введите два числа...\n");
  scanf("%f", &A);
  scanf("%f", &B);
  //Рассчитываем среднее значение между двумя введенными числами
  S = (A + B) / 2;

  printf("Среднее значение = %.2f\n", S);
  return 0;
}

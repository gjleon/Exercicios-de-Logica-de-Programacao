#include <stdio.h>

int factorielle (int number) {
  int i, factorielle;

  for ( i = number - 1, factorielle = number; i > 1; i--) {
    factorielle = i * factorielle;

  }
  return factorielle;
}
int main() {
  int a;
  scanf("%d", &a );
  a= factorielle(a);
  factorielle(a);

  return 0;
}

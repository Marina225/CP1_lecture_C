#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  // the minimum number of practices
  printf("%d\n", n - 1);

  // players by practices
  for (int i = 1; i < n; i++) {
    printf("%d ", i);
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}

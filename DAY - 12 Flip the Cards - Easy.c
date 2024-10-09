#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n, x;
    scanf("%d %d", &n, &x);

    int down = n - x;

    int min_flips = (x < down) ? x : down; 

    printf("%d\n", min_flips);
  }
  return 0;
}
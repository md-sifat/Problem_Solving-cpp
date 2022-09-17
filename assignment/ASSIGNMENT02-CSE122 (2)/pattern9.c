#include <stdio.h>
int main() {
   int n, space;
   scanf("%d", &n);
   for (int i = n; i >= 1; --i) {
      for (space = 0; space < n - i; ++space)
         printf("  ");
      for (int j = i; j <= 2 * i - 1; ++j)
         printf("@ ");
      for (int j = 0; j < i - 1; ++j)
         printf("@ ");
      printf("\n");
   }
   int k=0;
   for (int i = 2; i <= n; ++i, k = 0) {
      for (space = 1; space <= n - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("@ ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
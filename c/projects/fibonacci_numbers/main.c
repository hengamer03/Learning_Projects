#include <stdio.h>

int main() {

    int i, n;

    int t1 = 0, t2 = 1;

    int nextTerm = t1 + t2;

    printf("enter sequence\n\n");
    scanf("%d", &n);

    printf("\nfibonacci series:\n d%, %d, ", t1, t2, "\n\n");

    for (i = 3; i <= n; ++i) {
      printf("%d, ", nextTerm);
      t1 = t2;
      t2 = nextTerm;
      nextTerm = t1 + t2;
    }

    return 0;
}
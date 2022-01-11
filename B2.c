#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    do {
        scanf("%d", &n);
    } while (n < 2 || n > 10);



    if (n == 1) {
        printf("0");
    }  else {
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int b[n-1];

        for (int i = 0; i < n - 1; i++) {
            b[i] = a[i] * a[i+1];
        }

        int max = b[0];
        for (int i = 1; i < n - 1; i++) {
            if (b[i] > max) {
                max = b[i];
            }
        }

        printf("%d", max);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    float a[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    float max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("%.4f", max);

    return 0;
}

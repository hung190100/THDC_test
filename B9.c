#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    float s = 0;
    int k = 0;
    for (int i = 1; i < N-1; i++) {
        if (a[i] > a[i-1] && a[i] > a[i+1]) {
            s = s + a[i];
            k++;
        }
    }

    printf("%g\n%f", s, s/k);

    return 0;
}

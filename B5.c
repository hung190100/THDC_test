#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    do {
        scanf("%d", &N);
    } while (N < 1 && N > 100);

    int a[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int bigger = 0;
    int equal = 0;
    int smaller = 0;

    for (int i = 0; i < N; i++) {
        if (a[i] < a[0]) {
            smaller++;
        } else if (a[i] > a[0]) {
            bigger++;
        } else {
            equal++;
        }
    }

    printf("%d %d %d", smaller, equal, bigger);

    return 0;
}

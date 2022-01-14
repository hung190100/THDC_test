#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d", &N);

    if (N <= 0) {
        printf("Error");
    } else {
        int a[N/2];
        int count = 0;
        for (int i = 1; i <= N; i++) {
            if (N%i == 0) {
                a[count] = i;
                count++;
            }
        }

        int sum = 0;
        for (int i = 0; i < count; i++) {
            if (a[i] % 3 == 0 && a[i] % 5 != 0) {
                sum += a[i];
            }
        }

        printf("%d\n", count);
        printf("%d", sum);
    }

    return 0;
}

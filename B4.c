#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("ERROR");
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]%2 == 1 && arr[i]%5 != 0) {
            s += arr[i];
        }
    }

    printf("%d", s);

    return 0;
}

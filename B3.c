#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_SNT(int n) {
    if (n == 2 || n == 3) {
        return 1;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("ERROR");
    } else {
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int count = 0; // dem so cac so nguyen to
        int b[100]; // mang luu cac so nguyen to

        for (int i = 0; i < n; i++) {
            if (check_SNT(a[i])) {
                b[count] = a[i];
                count++;
            }
        }

        if (count == 0) {
            printf("Khong co so nguyen to");
        } else {
            int max = b[0];
            for (int i = 1; i < count; i++) {
                if (b[i] > max) {
                    max = b[i];
                }
            }

            printf("%d", max);
        }
    }

    return 0;

}

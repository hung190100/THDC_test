#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);

    int a1 = fabs(n1);
    int a2 = fabs(n2);
    int g = gcd(n1,n2);
    if (a2 > a1 || (a1 > a2 && a1%a2 != 0)) {
        printf("%d\n%d", n1/g, n2/g);
    } else {
        printf("%d", n1/n2);
    }

    return 0;
}

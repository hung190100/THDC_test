#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y, f;

    scanf("%lf %lf", &x, &y);

    if (x*y < 0) {
        f = fabs(x*sin(y)) / (x*x + y*y);
    } else if (x*y == 0) {
        f = acos(x*y) - asin(y*x);
    } else {
        f = pow(x*x+1, 1.0/2) - pow(2*y*y + 2, 1.0/3);
    }

    printf("f = %lf", f);



    return 0;
}

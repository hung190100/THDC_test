#include<stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if(a>0 && b>0 && c>0 )
    {
        if( (a+b>c) && (b+c>a) && (a+c>b) )
        {
            double p=(a+b+c)/2.0;
            printf("%lf",sqrt(p*(p-a)*(p-b)*(p-c)));
        }
        else
        {
            printf("Khong phai tam giac");
        }
    }
    else
    {
        printf("Khong phai tam giac");
    }
    return 0;

}

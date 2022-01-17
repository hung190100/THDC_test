#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int sum_odd=0;
    for(int i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(a[i]%2==0)
        {
            sum_odd+=a[i];
        }
    }
    printf("%d %d",min,sum_odd);
    return 0;

}

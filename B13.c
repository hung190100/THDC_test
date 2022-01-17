#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    int x=1;
    b[0]=a[0];
    for(int i=1; i<n; i++)
    {
        int count=0;
        for(int j=0; j<x; j++)
        {
            if(a[i]==b[j])
                count++;
        }
        if(count==0)
        {
            b[x]=a[i];
            x++;
        }
    }
    printf("%d",x);
    return 0;

}

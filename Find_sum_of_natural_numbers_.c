#include<stdio.h>
int main()
{
    int n, a=0, i=1;
    scanf("%d", &n);
    for(;i<=n;i++)
    {
        a=a+i;
    }
    printf("%d", a);
}
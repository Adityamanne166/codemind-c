#include<stdio.h>
int main()
{
    int n, m, a, s;
    scanf("%d", &n);
    m=n;
    s=0;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        s=s*10+a;
    }
    if(m==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
#include<stdio.h>
int main()
{
    int n, r, sum=0, c=1, p=1, i, a;
    scanf("%d", &n);
    a=n;
    while(a!=0)
    {
        sum=(sum*10)+a%10;
        a=a/10;
    }
    a=sum;
    sum=0;
    while(a!=0)
    {
        r=a%10;
        for(i=1;i<=c;i++)
        {
            p=p*r;
        }
        sum=sum+p;
        a=a/10;
        c++;
        p=1;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
}
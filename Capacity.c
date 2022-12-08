#include<stdio.h>
int main()
{
    int s, t, b;
    scanf("%d %d %d",&s, &t, &b);
    int c, k;
    c=2*s*t*b*512;
    k=c/1024;
    printf("%dkb",k);
}
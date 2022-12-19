#include<stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    a=n%9;
    if(a==0)
    printf("True");
    else
    printf("False");
}
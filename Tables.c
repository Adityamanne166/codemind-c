#include<stdio.h>
int main()
{
    int n, i=1, a=0,m;
    scanf("%d%d", &n,&m);
    for(i;i<=m;i++)
    if(i%2!=0)
    {
        a=n*i;
        printf("%d x %d = %d
",n ,i ,a);
    }
}
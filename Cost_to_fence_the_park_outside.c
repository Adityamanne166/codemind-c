#include<stdio.h>
int main()
{
    int l, b, w, c, a, v;
    scanf("%d %d %d %d", &l, &b, &w, &c);
    a=(b+2*w)*(l+2*w)-(b*l);
    v=c*a;
    printf("%d", v);
}
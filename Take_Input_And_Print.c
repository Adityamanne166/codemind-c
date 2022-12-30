#include <stdio.h>
#include<string.h>
int  main()
{
    char arr[1000];
    fgets(arr,1000,stdin);
    printf("%s",arr);
    return 0;
}
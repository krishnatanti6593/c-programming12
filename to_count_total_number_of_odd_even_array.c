#include <stdio.h>
int main()
{
    int a[10];
    int count = 0, c = 0;
    printf("enter the number\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
        else
        {
            c++;
        }
    }
    printf("%d even number\n", count);
    printf("%d odd number \n", c);

    return 0;
}
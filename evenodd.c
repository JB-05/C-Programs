#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("The number you have entered is EVEN!\n");
    }
    else
    {
        printf("The number you have entered is ODD!\n");
    }
    return 0;
}
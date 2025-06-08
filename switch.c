#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("you entered 1\n");
        break;
    case 2:
        printf("you entered 2\n");
        break;
    case 3:
        printf("you enteres 3\n");
        break;
    case 4:
        printf("you entered 4\n");
        break;
    default:
        printf("Nothing Matched");
    }
    return 0;
}
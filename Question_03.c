#include <stdio.h>
#define sum(a, b) a + b
#define multi(a, b) a *b
int calculations();
int main()
{

    calculations();
    return 0;
}

int calculations()
{

    int number1 = 0;
    int number2 = 0;

    printf("Enter Number 1 : ");
    scanf("%d", &number1);
    printf("Enter Number 2 : ");
    scanf("%d", &number2);

    printf("%d + %d  = %d\n", number1, number2, sum(number1, number2));
    printf("%d * %d  = %d", number1, number2, multi(number1, number2));
    return 0;
}

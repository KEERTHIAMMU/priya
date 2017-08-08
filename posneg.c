#include <stdio.h>
int main()
{
    double number;

    printf("Enter a Number: ");
    scanf("%lf", &number);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a Negative Number.");
    }
    else
        printf("You entered a Positive Number.");
    return 0;
}

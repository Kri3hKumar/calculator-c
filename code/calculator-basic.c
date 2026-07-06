#include <stdio.h>
#include <math.h>

/*
TODO (Future Me):
Learn proper delay/sleep functions instead of using busy-wait loops.

Topics to learn:
- sleep()
- usleep()
- nanosleep()
- Sleep() (Windows)
- clock() / time functions
*/

/*void delay(int a){
    int add;
    int time;
    int i;
    add *= i;
    add++ ;
    add++ ;

    time = a*10000000;
    for (int i = 0; i < time; i++)
    {
        add*= i;
        add++;
        add++;
    }


}*/

void print_Menu()
{
    printf("\n-------------------------------------------------\n");
    printf("\n\n\n Welcome to Simple Calculator\n");
    printf("\nChoose one of the following options:");
    printf("\n1. Addition");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nNow, enter your choice: ");
}

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Division\n");

        return NAN;
    }
    else
    {
        return a / b;
    }
}
double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus\n");

        return NAN;
    }
    else
    {
        return a % b;
    }
}

int main(int argc, char const *argv[])
{
    int choice;
    double first, second, result;
    while (1)
    {
        print_Menu();
        scanf("%d", &choice);
        if (choice == 7)
        {

            break;
        }
        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid menu choice\n");

            continue;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);
        printf("Now enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1:
            result = first + second;
            break;
        case 2:
            result = first - second;

            break;
        case 3:

            result = first * second;
            break;
        case 4:
            result = division(first, second);
            break;
        case 5:
            result = modulus(first, second);
            break;
        case 6:
            result = pow(first, second);
            break;
        }
        if (!isnan(result))
        {
            printf("\nResult of operation is %.2f\n\n", result);
        }
    }

    return 0;
}

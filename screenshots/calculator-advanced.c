#include <stdio.h>
#include <math.h>
#include <string.h>

#define M_PI 3.14159265358979323846

void diff_menu()
{
    printf("\n-------------------------------------------------\n");
    printf("\nChoose one of the following options:");
    printf("\n1. Basic Calculator");
    printf("\n2. Scientific Calculator");
    printf("\n3. Exit\n");
}

void basic_menu()
{
    printf("\n=================================================\n");
    printf("\n Welcome to Simple Calculator\n");
    printf("\n=================================================\n");
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
    return a / b;
}

double modulus(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus\n");
        return NAN;
    }
    return fmod(a, b);
}

void scientific_menu()
{
    printf("\n=================================================\n");
    printf("\n Welcome to Scientific Calculator\n");
    printf("\n=================================================\n");
    printf("\nChoose one of the following options:");
    printf("\n1. Square root");
    printf("\n2. Absolute Value");
    printf("\n3. Percentage");
    printf("\n4. Logarithm");
    printf("\n5. Trigonometric Functions");
    printf("\n6. Exit");
    printf("\nNow enter your choice: ");
}

double square_root(double num)
{
    return sqrt(num);
}

double absolte_value(double num)
{
    return fabs(num);
}

double percentage(double num, double percent)
{
    return num * (percent * 0.01);
}

double logarithm(double num)
{
    return log(num);
}

void trigono()
{
    printf("\n========================================");
    printf("\n      TRIGONOMETRIC FUNCTIONS");
    printf("\n========================================");
    printf("\n1. Sine (sin)");
    printf("\n2. Cosine (cos)");
    printf("\n3. Tangent (tan)");
    printf("\n4. Cotangent (cot)");
    printf("\n5. Secant (sec)");
    printf("\n6. Cosecant (cosec)");
    printf("\n7. Exit");
    printf("\n========================================");
    printf("\nEnter your choice: ");
}

double trigono_options(int choice, double num)
{
    switch (choice)
    {
    case 1:
        return sin(num);
    case 2:
        return cos(num);
    case 3:
        return tan(num);
    case 4:
        return 1.0 / tan(num);
    case 5:
        return 1.0 / cos(num);
    case 6:
        return 1.0 / sin(num);
    default:
        return NAN;
    }
}

int main(int argc, char const *argv[])
{
    int choice, previous_result_continue;
    int number_of_operations = 0;
    double first, second, result;
    int menu;
    int exit;

    int menu_choice_for_scientific_calculator;
    double first_sc, result_for_sc;
    double percent;
    int number_of_operations_for_sc = 0;

    int choice_for_trig;

    while (1)
    {
        diff_menu();
        scanf("%d", &menu);

        if (menu == 1)
        {
            basic_menu();
            scanf("%d", &choice);

            if (choice == 7)
            {
                printf("\nAre you sure you want to exit?\n1. Yes\n2. No\n");
                scanf("%d", &exit);
                if (exit == 1)
                {
                    printf("\nThanks for using this calculator\n");
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (choice < 1 || choice > 7)
            {
                fprintf(stderr, "Please enter a number between 1 and 7.\n");
                continue;
            }

            printf("\nPlease enter the first number: ");
            scanf("%lf", &first);

        again:
            number_of_operations = number_of_operations + 1;
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
                if (choice == 1)
                    printf("\n\n%.2f + %.2f = %.2f\n", first, second, result);
                else if (choice == 2)
                    printf("\n\n%.2f - %.2f = %.2f\n", first, second, result);
                else if (choice == 3)
                    printf("\n\n%.2f * %.2f = %.2f\n", first, second, result);
                else if (choice == 4)
                    printf("\n\n%.2f / %.2f = %.2f\n", first, second, result);
                else if (choice == 5)
                    printf("\n\n%.2f %% %.2f = %.2f\n", first, second, result);
                else if (choice == 6)
                    printf("\n\n%.2f^%.2f = %.2f\n", first, second, result);

                double previous_result = result;
                printf("                                                                                  --------------------------");
                printf("\n                                                                                  | Previous Result: %.2f  |\n", previous_result);
                printf("                                                                                  --------------------------");

                printf("\nYou have performed %d number of operations..\n", number_of_operations);
                printf("\nDo you want to continue with the previous result?\n1. Yes\n2. No\n");
                scanf("%d", &previous_result_continue);

                if (previous_result_continue == 1)
                {
                    first = previous_result;
                    printf("Enter the operations that you want to perform(1-6): ");
                    scanf("%d", &choice);
                    goto again;
                }
                else
                {
                    printf("\nDo you want to exit this calculator?\n1. Yes\n2. No\n");
                    scanf("%d", &exit);
                    if (exit == 1)
                    {
                        printf("Thanks for using this calculator\n");
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        else if (menu == 2)
        {
            scientific_menu();

        again_for_sc:
            scanf("%d", &menu_choice_for_scientific_calculator);

            if (menu_choice_for_scientific_calculator == 6)
            {
                printf("\nAre you sure you want to exit?\n1. Yes\n2. No\n");
                scanf("%d", &exit);
                if (exit == 1)
                {
                    printf("\nThanks for using this calculator\n");
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (menu_choice_for_scientific_calculator < 1 || menu_choice_for_scientific_calculator > 6)
            {
                fprintf(stderr, "Please enter a number between 1 and 6.\n");
                continue;
            }

            printf("\nEnter the number: \n");
            scanf("%lf", &first_sc);
            number_of_operations_for_sc = number_of_operations_for_sc + 1;

            switch (menu_choice_for_scientific_calculator)
            {
            case 1:
                result_for_sc = square_root(first_sc);
                printf("\n\nSquare root of %.2f = %.2f\n", first_sc, result_for_sc);
                break;
            case 2:
                result_for_sc = absolte_value(first_sc);
                printf("\n\nAbsolute value of %.2f = %.2f\n", first_sc, result_for_sc);
                break;
            case 3:
                printf("\nWhat percentage of %.2f: ", first_sc);
                scanf("%lf", &percent);
                result_for_sc = percentage(first_sc, percent);
                printf("\n%.2f percent of %.2f is %.2f\n", percent, first_sc, result_for_sc);
                break;
            case 4:
                result_for_sc = logarithm(first_sc);
                printf("\nlog(%.2f) = %.2f\n", first_sc, result_for_sc);
                break;
            case 5:
            {
                trigono();
                printf("\n");
                scanf("%d", &choice_for_trig);

                if (choice_for_trig == 7)
                {
                    goto menu_equal_3;
                }

                double radian = first_sc * (M_PI / 180.0);
                result_for_sc = trigono_options(choice_for_trig, radian);

                if (choice_for_trig == 1)
                    printf("\nsin(%.2f) = %.2f\n", first_sc, result_for_sc);
                else if (choice_for_trig == 2)
                    printf("\ncos(%.2f) = %.2f\n", first_sc, result_for_sc);
                else if (choice_for_trig == 3)
                    printf("\ntan(%.2f) = %.2f\n", first_sc, result_for_sc);
                else if (choice_for_trig == 4)
                    printf("\ncot(%.2f) = %.2f\n", first_sc, result_for_sc);
                else if (choice_for_trig == 5)
                    printf("\nsec(%.2f) = %.2f\n", first_sc, result_for_sc);
                else if (choice_for_trig == 6)
                    printf("\ncosec(%.2f) = %.2f\n", first_sc, result_for_sc);

                break;
            }
            default:
                break;
            }

            printf("\nYou have performed %d number of operations..\n", number_of_operations_for_sc);
            printf("\nDo you want to continue?\n1. Yes\n2. No\n");
            scanf("%d", &exit);

            if (exit == 1)
            {
                continue;
            }
            else
            {
                printf("Thanks for using this calculator\n");
                break;
            }
        }
        else if (menu == 3)
        {
        menu_equal_3:
            printf("\nAre you sure you want to exit?\n1. Yes\n2. No\n");
            scanf("%d", &exit);
            if (exit == 1)
            {
                printf("\nThanks for using this calculator\n");
                break;
            }
            else
            {
                continue;
            }
        }
        else
        {
            printf("\nInvaild option..");
            continue;
        }
    }

    return 0;
}
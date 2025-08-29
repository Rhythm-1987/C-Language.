// This is a master program which will allow us to run all the practicals of C in one single program

// All THE LINKs
#include <stdio.h>
#include <math.h>

// Declaring Functions :
void Space()
{
    printf("\n\n");
}

int main()
{
    // Declaring Variables :
    int program;

    // Main Page :
    printf("This is the program to execute all the programs taught till yet.\n");
    printf("These are the following programs with the execution number :\n");

    // MENU :
    // Practical 1 :
    printf("1 : Printing - Hello World\n");
    printf("2 : A program to write address\n");
    printf("3 : A program to print addition of 2 numbers\n");

    // Practical 2 :
    printf("4 : A program to convert temperature from Fahrenheit to Celsius.\n");
    printf("5 : A program to find percentage of 5 subjects.\n");
    printf("6 : A program to convert seconds into hours, minutes & seconds and print in HH:MM:SS.\n");

    // Practical 3 :
    printf("7 : A program to check whether the given number is positive or negative.\n");
    printf("8 : A program to find out largest number from given three numbers using Logical Operator (&&).\n");
    printf("9 : A program to find out largest number from given three numbers without using Logical Operator (&&).\n");

    // Practical 4 :
    printf("10 : A program to check whether the given year is leap year or not.\n");
    printf("11 : A program to perform Addition,  Subtraction, Multiplication and Division of 2 numbers as per user's choice.\n");
    printf("12 : A program to check whether the triangle is isosceles, equilateral, scalene or right-angled triangle.\n");

    // Asking user for the program to run :
    printf("What is the program you want to run ?\n");
    scanf("%d", &program);
    

    // All The Programs :
    switch (program)
    {
    case 1: // Printing - Hello World
        Space();
        printf("Hello World!!");
        break;

    case 2: // A program to write address
        Space();
        printf("Marwadi University,\n");
        printf("Rajkot,\n");
        printf("Gujrat.");
        break;

    case 3: // A program to print addition of 2 numbers
        Space();
        int addnum1, addnum2;
        printf("Enter a number to add:\n");
        scanf("%d", &addnum1);
        printf("Enter another number to add:\n");
        scanf("%d", &addnum2);
        printf("The Addition of %d and %d is %d.", addnum1, addnum2, addnum1 + addnum2);
        break;

    case 4: // A program to convert temperature from Fahrenheit to Celsius.
        Space();
        float temp_cel, temp_fah;
        printf("Enter the temperature to convert to celsius:\n");
        scanf("%f", &temp_fah);
        printf("%f celcius is equal to %6.2f farhrenheit.", temp_fah, ((temp_fah - 32) * 5 / 9));
        break;

    case 5: // A program to find percentage of 5 subjects.
        Space();
        float subject1, subject2, subject3, subject4, subject5, total, percentage;
        printf("Enter marks for Subject 1:\n");
        scanf("%f", &subject1);
        printf("Enter marks for Subject 2:\n");
        scanf("%f", &subject2);
        printf("Enter marks for Subject 3:\n");
        scanf("%f", &subject3);
        printf("Enter marks for Subject 4:\n");
        scanf("%f", &subject4);
        printf("Enter marks for Subject 5:\n");
        scanf("%f", &subject5);
        total = subject1 + subject2 + subject3 + subject4 + subject5;
        percentage = (total / 500) * 100;
        printf("The percentage of %4.2f, %4.2f, %4.2f, %4.2f and %4.2f is %4.2f.", subject1, subject2, subject3, subject4, subject5, percentage);
        break;

    case 6: // A program to convert seconds into hours, minutes & seconds and print in HH:MM:SS.
        Space();
        int in_seconds, out_hours, out_mins, out_seconds;
        printf("Enter the number of seconds\n");
        scanf("%d", &in_seconds);
        out_hours = in_seconds / 3600;
        out_mins = (in_seconds % 3600) / 60;
        out_seconds = (in_seconds % 3600) % 60;
        printf("%d seconds is equal to %d : %d : %d", in_seconds, out_hours, out_mins, out_seconds);
        break;

    case 7: // A program to check whether the given number is positive or negative.
        Space();
        int check_num;
        printf("Enter the number you want to check :\n");
        scanf("%d", &check_num);
        if (check_num > 0)
        {
            printf("The Number is Positive.");
        }
        else if (check_num == 0)
        {
            printf("The Number is Zero(Neutral)");
        }
        else
        {
            printf("The Number is Negative.");
        }
        break;

    case 8: // A program to find out largest number from given three numbers using Logical Operator (&&).
        Space();
        int lar_num1, lar_num2, lar_num3;
        printf("Enter a number :\n");
        scanf("%d", &lar_num1);
        printf("Enter another number :\n");
        scanf("%d", &lar_num2);
        printf("Enter one last number:\n");
        scanf("%d", &lar_num3);
        if (lar_num1 > lar_num2 && lar_num1 > lar_num3)
        {
            printf("%d is the largest among the three given numbers.", lar_num1);
        }
        else if (lar_num2 > lar_num1 && lar_num2 > lar_num3)
        {
            printf("%d is the largest among the three given numbers.", lar_num2);
        }
        else if (lar_num3 > lar_num2 && lar_num3 > lar_num1)
        {
            printf("%d is the largest among the three given numbers.", lar_num3);
        }
        else
        {
            printf("There are two/three same numbers and both/all of the are the largest among eachother");
        }
        break;

    case 9: // A program to find out largest number from given three numbers without using Logical Operator (&&).
        Space();
        int lar_numx, lar_numy, lar_numz;
        printf("Enter a number :\n");
        scanf("%d", &lar_numx);
        printf("Enter another number :\n");
        scanf("%d", &lar_numy);
        printf("Enter one last number:\n");
        scanf("%d", &lar_numz);
        if (lar_numx > lar_numy)
        {
            if (lar_numx > lar_numz)
            {
                printf("%d is greater then all other numbers.", lar_numx);
            }
            else
            {
                printf("%d is greater then all other numbers.", lar_numz);
            }
        }
        else
        {
            if (lar_numy > lar_numz)
            {
                printf("%d is greater then all other numbers.", lar_numy);
            }
            else
            {
                printf("%d is greater then all other numbers.", lar_numz);
            }
        }
        break;

    case 10: // A program to check whether the given year is leap year or not.
        Space();
        int leap_year;
        printf("Enter year to check:");
        scanf("%d", &leap_year);
        if ((leap_year % 4 == 0 && leap_year % 100 != 0) || (leap_year % 400 == 0))
        {
            printf("This year is a leap year.");
        }
        else
        {
            printf("This year is not a leap year.");
        }
        break;

    case 11: // A program to perform Addition,  Subtraction, Multiplication and Division of 2 numbers as per user's choice.
        Space();
        int calc_num1, calc_num2;
        char exp_choice;
        printf("Enter a number: ");
        scanf("%d", &calc_num1);
        printf("Enter another number: ");
        scanf("%d", &calc_num2);
        printf("Select an oppresion to perfrom from (+ , -, *, /): ");
        getchar();
        scanf("%c", &exp_choice);
        switch (exp_choice)
        {
        case '+':
        {
            printf("Answer = %d", calc_num1 + calc_num2);
            break;
        }
        case '-':
        {
            printf("Answer = %d", calc_num1 - calc_num2);
            break;
        }
        case '*':
        {
            printf("Answer = %d", calc_num1 * calc_num2);
            break;
        }
        case '/':
        {
            printf("Answer = %d", calc_num1 / calc_num2);
            break;
        }
        default:
        {
            printf("Enter a valid operator.");
        }
        }
        break;

    case 12: // A program to check whether the triangle is isosceles, equilateral, scalene or right-angled triangle.
        Space();
        int side1, side2, side3;
        printf("Enter the first side of triangle : ");
        scanf("%d", &side1);
        printf("Enter the second side of triangle : ");
        scanf("%d", &side2);
        printf("Enter the third side of triangle : ");
        scanf("%d", &side3);
        if (side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2)
        {
            printf("Triangle is not possible.");
        }
        else if (side1 == side2 && side2 == side3)
        {
            printf("Triangle is rquilateral.");
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            printf("Triangle is isosceles.");
        }
        else if (side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 * side1 || side3 * side3 + side1 * side1 == side2 * side2)
        {
            printf("Triangle is right angled.");
        }
        else
        {
            printf("Triangle is scalene.");
        }
        break;
    default:
        printf("Please enter the execution code only.");
        break;
        return 0;
    }
}
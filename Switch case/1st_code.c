// C program to print the day of the week using switch case
#include<stdio.h>

int main()
{
int x ;
printf("Enter a number between 1 and 7");
scanf("%d",&x);

switch(x)
{
    case 1:
    printf("Monday");
        break;
    case 2:
    printf("Tuesday");
        break;
    case 3:
    printf("Wednesday");
        break;
    case 4:
    printf("Thursday");
        break;
    case 5:
    printf("Friday");
        break;
    case 6:
    printf("Saturday");
        break;
    case 7:
    printf("Sunday");
        break;
    default:
    printf("please enter a number between 1 to 7 ");
}
}

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

void initDate(struct date *ptrDate)
{
    ptrDate->day = 21;
    ptrDate->month = 9;
    ptrDate->year = 23;
}

void printDateOnConsole(struct date *ptrDate)
{
    printf("Date :%d-%d-%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
void acceptDateFromConsole(struct date *ptrDate)
{
    printf("Enter the day :");
    scanf("%d", &ptrDate->day);
    printf("Enter the month :");
    scanf("%d", &ptrDate->month);
    printf("Enter the year :");
    scanf("%d", &ptrDate->year);
    printf("Date: %d-%d-%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

int main()
{

    struct date Date;
    int choice;
    while (1)
    {
        printf("1. Initialize date \n");
        printf("2. Print the date on console\n");
        printf("3. Enter the date \n");

        printf("Enter the choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            initDate(&Date);
            break;
        case 2:
            printDateOnConsole(&Date);
            break;
        case 3:
            acceptDateFromConsole(&Date);
            break;
        default:
            printf("Invalid chocie\n");
        }
    }

    return 0;
}
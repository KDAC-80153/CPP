#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
} d1;

void initDate()
{

    d1.day = 21;
    d1.month = 9;
    d1.year = 23;
}

void printDateOnConsole()
{
    cout << "Date :" << d1.day << "-" << d1.month << "-" << d1.year << endl;
}
void acceptDateFromConsole()
{
    cout << "Enter the day :";
    cin >> d1.day;
    cout << "Enter the month :";
    cin >> d1.month;
    cout << "Enter the year :";
    cin >> d1.year;
    cout << "Date:" << d1.day << "-" << d1.month << "-" << d1.year << endl;
}
bool isLeapYear()
{
    int year;
    cout << "Enter Year" << endl;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "It is a Leap Year" << endl;
        return true;
    }
    else if (year % 100 == 0)
    {
        cout << "Not a Leap Year" << endl;
        return false;
    }
    else if (year % 4 == 0)
    {
        cout << "It is a Leap year" << endl;
        return true;
    }
    else
    {
        cout << "Not a leap year" << endl;
        return false;
    }
}

int main()
{

    struct date d1;
    int choice;

    cout << "1. Initialize date " << endl;
    cout << "2. Print the date on console " << endl;
    cout << "3. Enter the date " << endl;
    cout << "4. Enter the year " << endl;

    cout << "Enter the choice :" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        initDate();
        break;
    case 2:
        printDateOnConsole();
        break;
    case 3:
        acceptDateFromConsole();
        break;
    case 4:
        isLeapYear();
        break;
    default:
        cout << "Invalid chocie" << endl;
    }
    return 0;
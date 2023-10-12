#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: the year to check
 * Return: 1 if leap year, 0 otherwise
 *
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
int is_leap_year(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int is_leap = is_leap_year(year);

    if (is_leap)
    {
        days_in_month[2] = 29; // Update February days for leap year
    }

    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int day_of_year = 0;
    for (int i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;

    if (is_leap && month > 2)
    {
        day_of_year++; // Adjust for the extra day in leap year
    }

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", is_leap ? 366 - day_of_year : 365 - day_of_year);
}

#include <stdio.h>

// validate date entry
void chech_date(int month, int day, int year)
{
    int valid = 1;
    if (month < 1 || month > 12)
    {
        valid = 0;
    }
    else if (day < 1 || day > 31)
    {
        valid = 0;
    }
    else if (year < 0)
    {
        valid = 0;
    }
    else if (month == 2 && day > 28)
    {
        valid = 0;
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        valid = 0;
    }
    
    if (valid == 0)
    {
        printf("Invalid date\n");
        exit(0);
    }
    
}

// comand date
int compare_date(int month1, int day1, int year1, int month2, int day2, int year2)
{
    int result = 0;
    if (year1 < year2)
    {
        result = 1;
    }
    else if (year1 > year2)
    {
        result = 2;
    }
    else if (month1 < month2)
    {
        result = 1;
    }
    else if (month1 > month2)
    {
        result = 2;
    }
    else if (day1 < day2)
    {
        result = 1;
    }
    else if (day1 > day2)
    {
        result = 2;
    }
    return result;
}

// print statement based on result
void output(int result, int month1, int day1, int year1, int month2, int day2, int year2)
{
    if (result == 0)
    {
        printf("The dates are equal\n");
    }
    else if (result == 1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (result == 2)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
}

int main()
{
    int month1, day1, year1, month2, day2, year2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    chech_date(month1, day1, year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    chech_date(month2, day2, year2);

    int result = compare_date(month1, day1, year1, month2, day2, year2);
    output(result, month1, day1, year1, month2, day2, year2);

    return 0;
}
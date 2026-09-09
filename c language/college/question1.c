#include <stdio.h>
int main()
{
    int noofdays, day;
    int day1, day2, day3, day4, day5, day6, day7;
    int Sum1 = 0, Sum2 = 0, Sum3 = 0, Sum4 = 0, Sum5 = 0, Sum6 = 0, Sum7 = 0;
    printf("Enter the number of days\n");
    scanf("%d", &noofdays);
    printf("Assume 1-Monday,2-Tuesday,3-Wednesday,4-Thursday,5-Friday,6-Saturday,7-Sunday\n");

    for (int i = 1; i <= noofdays; i++)
    {
        printf("Enter the day number\n");
        scanf("%d", &day);
        switch (day)
        {
        case 1:
        {
            printf("Enter the number of vaccinations done on day1\n");
            scanf("%d", &day1);
            Sum1 += day1;
            break;
        }
        case 2:
        {
            printf("Enter the number of vaccinations done on day2\n");

            scanf("%d", &day2);
            Sum2 += day2;
            break;
        }

        case 3:
        {
            printf("Enter the number of vaccinations done on day3\n");

            scanf("%d", &day3);
            Sum3 += day3;
            break;
        }
        case 4:
        {
            printf("Enter the number of vaccinations done on day4\n");

            scanf("%d", &day4);
            Sum4 += day4;
            break;
        }
        case 5:
        {
            printf("Enter the number of vaccinations done on day5\n");

            scanf("%d", &day5);
            Sum5 += day5;
            break;
        }
        case 6:
        {
            printf("Enter the number of vaccinations done on day6\n");

            scanf("%d", &day6);
            Sum6 += day6;
            break;
        }
        case 7:
        {
            printf("Enter the number of vaccinations done on day7\n");

            scanf("%d", &day7);
            Sum7 += day7;
            break;
        }
        default:
        {
            printf("Wrong choice\n");
            break;
        }
        }
    }
    printf("Enter the day number for the total number of Vaccinations\n");
    int match;
    scanf("%d", &match);
    switch (match)
    {

    case 1:
    {
        printf("Total vaccinations done on Monday :%d", Sum1);
        break;
    }
    case 2:
    {
        printf("Total vaccinations done on Tuesday :%d", Sum2);
        break;
    }
    case 3:
    {
        printf("Total vaccinations done on Wednesday :%d", Sum3);
        break;
    }

    case 4:
    {
        printf("Total vaccinations done on Thursday :%d", Sum4);
        break;
    }
    case 5:
    {
        printf("Total vaccinations done on Friday :%d", Sum5);
        break;
    }
    case 6:
    {
        printf("Total vaccinations done on Saturday :%d", Sum6);
        break;
    }

    case 7:
    {
        printf("Total vaccinations done on Sunday:%d", Sum7);
        break;
    }

    default:
    {
        printf("Wrong choice");
        break;
    }
        }
    return 0;
}
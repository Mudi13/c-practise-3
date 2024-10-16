#include<stdio.h>
int main()
{
    int year,outcome;
    printf("Enter number of years: ");
    scanf("%d",&year);
    
    printf("\npress 1 for converting years into months");
    printf("\npress 2 for converting years into days");
    printf("\npress 3 for converting years into hours");
    printf("\npress 4 for converting years into minutes");
    printf("\npress 5 for converting years into seconds\n");
    
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: {
            outcome=12*year;
            printf("\n Number of months= %d",outcome);
            break;
        }
        case 2: {
            outcome=365*year;
            printf("\n Number of days= %d",outcome);
            break;
        }
        case 3: {
            outcome=365*24*year;
            printf("\n Number of hours= %d",outcome);
            break;
        }
        case 4: {
            outcome=365*24*60*year;
            printf("\n number of minutes= %d",outcome);
            break;
        }
        case 5: {
            outcome=365*24*60*60*12*year;
            printf("\n Number of seconds= %d",outcome);
            break;
        }
        default:
            printf("Invalid Choice\n");
    }
    return 0;
}
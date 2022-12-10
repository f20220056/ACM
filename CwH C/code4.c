#include <stdio.h>
int main()
{
    int select, value;
    char c;
label3:
    printf("\nPlease select the type of data conversion:-\n\tInch to Centimeter : Enter 1\n\tPound to Kilogram : Enter 2\n\tMile to Kilometer : Enter 3\n");
label1:
    scanf("%d", &select); // loop on entering a letter
    if (select == 1 || select == 2 || select == 3)
    {
    label2:
        printf("\nPlease enter the value you want to convert:-\n");
        scanf("%d", &value);
        if (select == 1)
        {
            printf("\n%d inch is equal to %.2f centimeter\n", value, value * 2.54);
        }
        if (select == 2)
        {
            printf("\n%d pound is equal to %.2f kilogram\n", value, value * 0.453592);
        }
        if (select == 3)
        {
            printf("\n%d mile is equal to %.2f kilometer\n", value, value * 1.60934);
        }
    label4:
        printf("\nPress 'a' to convert another value, 'b' to use another conversion type or 'q' to quit\n");
        scanf(" %c", &c); // space before %c
        if (c == 'a')
        {
            goto label2;
        }
        else if (c == 'b')
        {
            goto label3;
        }
        else if (c == 'q')
        {
            printf("\nThank you for using the Unit Conversion Programme\n\n");
        }
        else
        {
            goto label4;
        }
    }
    else
    {
        printf("\nPlease choose an option among 1 , 2 & 3\n");
        goto label1;
    }
    return 0;
}
/*
PROJECT-1: Unit Conversion
Date: 02/09/2022
*/
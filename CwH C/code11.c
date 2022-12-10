#include <stdio.h>
#include <string.h>
struct data
{
    char name[20];
    int lic;
    int km;
} driver1, driver2, driver3; // can user input no. of variables? Eg: 'n' no. of drivers

void func1(int i, char name[], int *lic, int *km)
{
    printf("\tEnter details of Driver %d:-\n", i);

    printf("Enter your name:-\n"); // error: skipped
    scanf("%s", name);

    printf("Enter your license no.:-\n");
    scanf("%d", lic);

    printf("Enter number of kilometers driven:-\n");
    scanf("%d", km);
}

void func2(int i, char name[], int lic, int km)
{
    printf("\tDetails of Driver %d:-\n", i);
    printf("Name: %s\n", name);
    printf("License No. %d\n", lic);
    printf("Kms driven: %d\n", km);
    printf("\n");
}

int main()
{
    printf("\n");
    printf("~~~~~~~ Input Details ~~~~~~~\n\n");
    func1(1, driver1.name, &driver1.lic, &driver1.km);
    func1(2, driver2.name, &driver2.lic, &driver2.km);
    func1(3, driver3.name, &driver3.lic, &driver3.km);
    printf("\n");
    printf("~~~~~~~ Printing Details ~~~~~~~\n\n");
    func2(1, driver1.name, driver1.lic, driver1.km);
    func2(2, driver2.name, driver2.lic, driver2.km);
    func2(3, driver3.name, driver3.lic, driver3.km);
    return 0;
}
/*
Exercise: 11 (Structure)
Driver Details
Date: 08/09/2022
*/
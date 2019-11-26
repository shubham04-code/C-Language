/*Parking system program.
This program is use to manage parking system.
Features:
 -To show total number of vehicle in parking.
 -To show total amount of earning.*/
#include <stdio.h>
#include <stdlib.h>
int nor = 0, nob = 0, noc = 0, count = 0, amount = 0;
int choice;
int menu();
void car();
void riksha();
void bus();
void deletes();
void showdetail();
int main()
{
    while(1)
    {
        switch (menu())
        {
        case 1:
            riksha();
            break;
        case 2:
            bus();
            break;
        case 3:
            car();
            break;
        case 4:
            showdetail();
            break;
        case 5:
            deletes();
            break;
        case 6:
            exit(0);
        default:
            printf("\nEnter valid choice");
        }
    }
    return 0;
}

void riksha()
{
    nor++;
    amount = amount + 40;
    count++;
}
void bus()
{
    nob++;
    amount = amount + 100;
    count++;
}
void car()
{
    noc++;
    amount = amount + 60;
    count++;
}
void showdetail()
{
    printf("\n\n1.Total number of riksha -: %d", nor);
    printf("\n2.Total number of bus -:%d", nob);
    printf("\n3.Total number of car -: %d", noc);
    printf("\n4.Total amount receive -: %d",amount);
    printf("\n\n*************************************************************************************************");
}
void deletes()
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
}
int menu()
{
    printf("\n\n1.Enter the riksha -: ");
    printf("\n2.Enter the bus -: ");
    printf("\n3.Enter the car -: ");
    printf("\n4.show status -: ");
    printf("\n5.Delete entry -: ");
    printf("\n6.Exit -: ");
    printf("\n\nEnter your choice -: ");
    scanf("%d",&choice);
    printf("\n\n*************************************************************************************************");
    return choice;
}

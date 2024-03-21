#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptrDate)
{
    ptrDate->day = 7;
    ptrDate->month = 4;
    ptrDate->year = 1931;
}
void printDateOnConsole(struct Date* ptrDate){
    printf("Today's date is %d/%d/%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("Enter date as DD/MM/YYY - ");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

int main()
{
    struct Date d1;
    acceptDateFromConsole(&d1); // argument
    printDateOnConsole(&d1);
   

    return 0;
}


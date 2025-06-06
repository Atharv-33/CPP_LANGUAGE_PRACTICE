//header file inclusion

#include <stdio.h>
#include <stdlib.h>
#include <exception>


// structure declaration
struct Date{
    int day;
    int month;
    int year;
};

//Function declarations 
struct Date* createInstance(int _day,int _month,int _year);
int getDay(struct Date* pDate);
int getMonth(struct Date* pDate);
int getYear(struct Date* pDate);
void setDay(struct Date* pDate,int newDay);
void setMonth(struct Date* pDate,int newMonth);
void setYear(struct Date* pDate,int newYear);
void showDate(struct Date* pDate);
void releaseInstance(struct Date* pDate);

//main function
int main(void){

    //client side

    struct Date* pNewDate_au;
    pNEwDate_au=createInstance(20,10,2003);

    showDate(pNewDate_au);

    setDay(pNewDate_au,21);
    setMonth(pNewDate_au,11);
    setYear(pNewDate_au,2004);

    printf(
        "%d /%d / %d",getDay(pNewDate_au),
        getMonth(pNewDate_au),getYear(pNewDate_au)
    );

    releaseInstance(pNewDate_au);
    pNewDate_au=NULL;

    return (0);
}

//server side

struct Date* createInstance (int _day,int _month,int _year){

    struct Date* pDate=NULL;

    pDate=(struct Date *)malloc(sizeof(struct Date));

    if (pDate == NULL){
        printf(" malloc(): fatal out of memory ");
        fprintf(stderr,"malloc(): Fatal out of memory error ");
        exit(-1);
    }

    pDate->day=_day;
    pDate->month=_month;
    pDate->year=_year;

    return pDate;
}


int getDay(struct Date* pDate){
     return (pDate->day);
}

int getMonth(struct Date* pDate){
    return (pDate->month);
}

int getYear(struct Date* pDate){
    return (pDate->year);
}

void setDay(struct Date* pDate,int newDay){
      pDate->day=newDay;
}

void setMonth(struct Date* pDate,int newMonth){
    pDate->month = newMonth;
}

void setYear(struct Date* pDate,int newYear){
     pDate->year = newYear;
}

void releaseInstance(struct Date* pDate){
     free(pDate);
     pDate=NULL;
}
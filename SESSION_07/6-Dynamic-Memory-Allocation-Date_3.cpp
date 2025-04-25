//header file inclusion

#include <stdio.h>
#include <stdlib.h>

//structure type definition
struct Date{
     int day;
     int month;
     int year;
};

//Function declarations
struct Date* createInstance(int _day,int _month,int _year);
int getDay(struct Date* pDate_au);
int getMonth(struct Date* pDate_au);
int getYear(struct Date* pDate_au);
void setDay(struct Date* pDate_au,int newDay);
void setMonth(struct Date* pDate_au,int newMonth);
void setYear(struct Date* pDate_au,int newYear);
void showDate(struct Date* pDate_au);
void releaseInstance(struct Date* pDate_au);

//main function

int main(void){

    //Client side
    struct Date* pNewDate_au=createInstance(20,10,2003);
    showDate(pNewDate_au);

    setDay(pNewDate_au,21);
    setMonth(pNewDate_au,11);
    setYear(pNewDate_au,2004);

    printf(
        "%d / %d /%d \n",getDay(pNewDate_au),
        getMonth(pNewDate_au),getYear(pNewDate_au)
    );

    releaseInstance(pNewDate_au);
    pNewDate_au=NULL;

    return (0);
}

//Server Side 
struct Date* createInstance(int _day,int _month,int _year){

    struct Date* pDate_au=NULL;

    pDate_au=(struct Date*)malloc(sizeof(struct Date));

    if (pDate_au == NULL){
        fprintf(stderr,"malloc():fatal out of memory");
        exit(-1);
    }

    pDate_au->day=_day;
    pDate_au->month=_month;
    pDate_au->year=_year;

    return (pDate_au);
}

int getDay(struct Date* pDate_au){
    return (pDate_au->day);
}

int getMonth(struct Date* pDate_au){
    return (pDate_au->month);
}

int getYear(struct Date* pDate_au){
    return (pDate_au->year);
}

void setDay(struct Date* pDate_au,int newDay){
    pDate_au->day=newDay;
}

void setMonth(struct Date* pDate_au,int newMonth){
    pDate_au->month=newMonth;
}

void setYear(struct Date* pDate_au,int newYear){
    pDate_au->year=newYear;
}

void releaseInstance(struct Date* pDate_au){
    free(pDate_au);
    pDate_au=NULL;
}
//header file inclusion
#include <stdio.h>
#include <stdlib.h>

//structure definition 

struct Date{
    int day;
    int month;
    int year;
};

//Function declarations
struct Date* createDateInstance(int _day,int _month, int _year);
int getDay(struct Date* pDate);
int getMonth(struct Date* pDate);
int getYear(struct Date* pDate);
void setDay(struct Date* pDate,int newDay);
void setMonth(struct Date* pDate,int newMonth);
void setYear(struct Date* pDate,int newYear);
void showDate(struct Date* pDate);
void releaseDateInstance(struct Date* pDate);

//main function
int main(void){
    //Client side
    
    struct Date* pNewDate_au=createDateInstance(20,10,2003);
    showDate();
    setDay(pNewDate_au,30);
    setMonth(pNewDate_au,11);
    setYear(pNewDate_au,2004);

    printf(
        "%d/%d/%d\n",getDay(pNewDate_au),
          getMonth(pNewDate_au),getYear(pNewDate_au)
    );

    releaseDateInstance(pNewDate_au);
    pNewDate_au=NULL;

    return (0);

}

//server side 

struct Date* createDateInstance(int _day,int _month,int _year){
    struct Date* pDate_au=NULL;

    pDate_au= (struct Date *)malloc (sizeof(struct Date));

    if (pDate_au == NULL){
        fprintf(stderr,"malloc():fatal out of memory\n ");
        exit(-1);
    }

    pDate_au->day=_day;
    pDate_au->month=_month;
    pDate_au->year=_year;


    return (pDate_au);
}

int getMonth(struct Date* pDate){
    return (pDate->day);
}

int getMonth(struct Date* pDate){
    return (pDate->month);
}

int getYear(struct Date* pDate){
    return (pDate->year);
}

void setDay(struct Date *pDate,int newDay){
    pDate->day=newDay;
}

void setMonth(struct Date* pDate,int newMonth){
    pDate->month=newMonth;
}

void setYear(struct Date* pDate,int newYear){
    pDate->year=newYear;
}

void showDate(struct Date* pDate){
     printf("\n %d/%d/%d",pDate->day,pDate->month,pDate->year);
}

void releaseDateInstance(struct Date* pDate){
     free(pDate);
     pDate=NULL;
}
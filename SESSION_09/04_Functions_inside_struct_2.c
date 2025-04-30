#include<stdio.h>

/*
   As per C-standard function cannot be defined inside a structure
*/

struct Date{
    int day;    /* data definition statement */ 
    int month;  /* data definition statement */
    int year;   /* data definition statement */

    //Function definition ->NOT ALLOWED inside 
    // struct (Listen to deep explanation in session 09)
    // CTE (unComment the entire function definition to see the error )

    int get_day()
    {
        return (day);
    }
}
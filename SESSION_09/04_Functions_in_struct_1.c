#include<stdio.h>

/*
   As per c-standard function cannot be defined inside a structure 
*/

struct Date{

    int day;   /* data definition statement */
    int month; /* data definition statement */
    int year;  /* data definition statement */

    // Function Definition -> NOT ALLOWED inside 
    // struct listen to deep explanation in session 09
    // CTE (uncomment entire function definition to see error )
    
    int get_day()
    {
      return (day);
    }
    

};
// THIS FIILE WILL NOT COMPILE 

#include <iostream>

using std::cout;

int compute(int x,int y);

class Date
{
    public:
        int day;
        int month;
        int year;

        void show (void)
        {
            cout << day << "/" << month << "/" << year << std::endl; 
        }

        void show (Date* pDate)
        {
            cout << pDate->day << "/" <<pDate->month << "/" << pDate->year
                 << std::endl;
        }

        //EVERY FUNCTION THAT IS WRITTEN INSIDE CLASS 
        // EXISTS TO PROCESS OBJECT OF CLASS DATE

        // EVERY SUCH FUNCTION MUST ACCEPT ADDRESS OF DATE OBJECT 
        // TO UNDERSTAND WHICH DATE OBJECT T PROCESS IN THE CURRENT CALL ?

};

// Let c be any class 
// Let f() be any function that wwe want to define in class s

class C{
    public:
       void f(C* pC,/* other optional params */){

       }

       void g()
       {

       }
};

int main(void)
{
    int result_au;

    result_au=compute(10,5);

    Date myBirthDate_au;

    myBirthDate_au.day=20;
    myBirthDate_au.month=10;
    myBirthDate_au=2003;

    Date::show (myBirthDate_au);

    Date d1_au;

    d1_au.day=22;
    d1_au.month=02;
    d1_au.year=2025;

    Date::show(&d1_au);

    Date d2_au;

    d2_au.day=23;
    d2_au.month=02;
    d2_au.year=2025;

    Date::show(&d2_au);
    return 0;
}

int compute(int x,int y){
     return (x+y)*(x-y);
}

/////////////////////////////////////

class Date
{

    public:
        int day;
        int month;
        int year;

        void show()
        {
            cout << this->day << "/" << this->month << "/" << this->year << std::endl;
        }

};

int main(void)
{

    Date myBirthDate_au;

    myBirthDate_au.day=20;
    myBirthDate_au.month=10;
    myBirthDate_au.year=2003;

    // Date::show (&myBirthDate_au);

    myBirthDate_au.show(); // Date::show (&myBirthDate_au);

    return 0;

}

// OBJECT ORIENTED ANALYSIS AND DESIGN WITH 
// APPLIACATION -> GRADY BOOCH 

// FIRST PRINCIPLES 
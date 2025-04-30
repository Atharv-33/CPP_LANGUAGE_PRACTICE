// THIS FILE WILL NOT COMPILE

#include <iostream>

using std::cout;


int compute(int x,int y);

class Date{
     
    public:
        int day;
        int month;
        int year;

        void show(void)
        {
            cout << day << "/" << "/" << month << "/" << year <<std::endl; 
        }

        void show (Date* pDate)
        {
            cout << pDate->day << "/" << pDate->month << "/" <<
                    pDate->year << std::endl;
        }

        //EVERY FUNCTION THAT IS WRITTEN INSIDE CLASS DATE 
        // EXISTS TO PROCESS OBJECT OF CLASS DATE

        // EVERY SUCH FUNCTION MUT ACCEPT ADDRESS OF DATE OBJECT 
        // TO UNDERSTAND WHICH DATE OBJECT TO PROCESS IN THE CURRENT CALL ?

};

//Let c be any class 
//Let f() be any function that we want to define in class c

class C{

    public:
        void f(C *pC,/*optional other params */)
        {

        }

        void g(){

        }

};

int main(void)
{
    int result_au;

    result_au=compute(10,20);

    Date myBirthDate_au;
    myBirthDate_au.day=20;
    myBirthDate_au.month=10;
    myBirthDate_au.year=2003;

    Date::show(&myBirthDate_au);

    Date d1_au;
    d1_au=22;
    d1_au=02;
    d1_au=2025;

    Date::show(&d1_au);

    Date d2_au;
    d2_au.day=23;
    d2_au.month=02;
    d2_au.year=2025;
    Date::show(&d2_au);

    return (0);

}

int compute(int x,int y){
    return (x+y)*(x-y);
}

class Date
{
    public:
       int day;
       int month;
       int year;
       
       void show()
       {
           cout << this->day << "/" << this->month << "/" << this->year 
                << std::endl;          
       }
};

int main(void)
{

    Date myBirthDate_au;

    myBirthDate_au.day=20;
    myBirthDate_au.month=10;
    myBirthDate_au.year=2003;

    //Date::show(&myBirthDate_au);

    //Date::show(&myBirthDate_au);

    myBirthDate_au.show(); // Date::show(&myBirthDate_au);

    return 0;
}

//OBJECT ORIENTED ANALYSIS AND DESIGN WITH 
// APPLICATION -> GRADY BOOCH

// FIRST PRINCIPLES

// COMPLEXITY
#include <iostream>

// COMPANY : PRODUCT

struct MassAndDistance_1
{
    double m1;
    double m2;
    double r;  
};

// COMPANY : PRODUCT 

class MassAndDistance_2
{
    double m1;
    double m2;
    double r;
};

int main(void)
{
    using std::cout;
    using std::endl;

    // GRAHAK : CLIENT 

    struct MassAndDistance_1 X1_au;
    MassAndDistance_2 X2_au;

    // CLIENT IS ACCESSING THE INTERNAL MEMBERS OF THE PRODUCT 
    // HE /SHE HAS BOUGHT 
    X1_au.m1 = 1.1;
    X1_au.m2 = 2.2;
    X1_au.r = 3.3;

    X2_au.m1 = 1.1;
    X2_au.m2 = 2.2;
    X2_au.r = 3.3;

    return 0;
}

// MAINSTREAM CASES 
// POWERFUL PROGRAMMING 
//  LANGUAGE DEEP EXPERT

// header file inclusion
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Definition of structure MassAndDistance 
// to capture information about mass and distance 

struct MassAndDistance{
    double m1;
    double m2;
    double r;
};

//Function declaration
double ComputeGravitational(struct MassAndDistance* pData);

int main(void){

    // variables 
    struct MassAndDistance earthSun_au;
    struct MassAndDistance jupitorSun_au;
    double forceBetweenEarthAndSun_au;
    double forceBetweenJupitorAndSun_au;

    //code 
    earthSun_au.m1=1.9898e30;
    earthSun_au.m2=5.9722e24;
    earthSun_au.r=149597871000;

    forceBetweenEarthAndSun=ComputeGravitational(&earthSun_au);

    printf("Gravitational force of attraction between earth and sun is : %lf Newton ",forceBetweenEarthAndSun_au);

    jupitorSun_au.m1=1.9891e30;
    jupitorSun_au.m2=1.89813e27;
    jupitorSun_au.r=760070000000;

    forceBetweenJupitorAndSun=ComputeGravitational(&jupitorSun_au);

    printf("Gravitational force of attraction between jupitor and sun is : %lf Newton",forceBetweenJupitorAndSun_au);

    return (0);
}

double ComputeGravitational(struct MassAndDistance* pData){

     //variables 
    double G_au=6.67*10e-11; /* universal gravitational constant */
    double F_au;   /* to store the force of attraction between those objects */

    //code

    if (pData-> m1 <=0.0 || pData->m2 <=0.0 || pData->r <=0.0){
        printf("Invalid Values for mass or distance ");
        return (-1);
    }

    F_au=(G_au * pData->m1 * pData->m2)/(pData->r * pData->r);

    return (F_au);
}
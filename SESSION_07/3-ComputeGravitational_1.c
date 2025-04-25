//header file inclusion
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Definition of structure MassAndDistance 
// capturing mass and distance of objects 

struct MassAndDistance{
      double m1;
      double m2;
      double r;
};

//Function declarartion 
double ComputeGravitational(struct MassAndDistance *pData);


int main(void){

    //variables 

    struct MassAndDistance earthSun_au;
    struct MassAndDistance jupitorSun_au;
    double forceBetweenEarthAndSun_au;
    double forceBetweenJupitorAndSun_au;
    
    //code
    earthSun_au.m1=1.9891e30;
    earthSun_au.m2=5.9722e24;
    earthSun_au.r=149597871000;

    forceBetweenEarthAndSun_au= ComputeGravitational(&earthSun_au);

    printf("Gravitational force between sun and earth
         : %lf Newton ",
         forceBetweenEarthAndSun_au);

    jupitorSun_au.m1=1.9891e30;
    jupitorSun_au.m2=1.89813e27;
    jupitorSun_au.r=7600700000000;

    forceBetweenJupitorAndSun_au=ComputeGravitational(&jupitorSun_au);

    printf("Gravitational force between sun and the jupitor = %lf
        Newton \n",forceBetweenJupitorAndSun_au);

    return (0);
}

double ComputeGravitational(struct MassAndDistance* pData){

    //variables 
    double G_au=6.67*10e-11; // universal constant of gravitation 
    double F_au; // for storing the amount of force 

    if (pData->m1 <=0.0 || pData->m2 <=0.0 ||pData->r <=0.0 ){
       return (NAN);
    }

    F_au=(G_au * pData->m1 *pData->m2)/(pData->r * pData->r);

    return (F_au);


}
//header file inclusion
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

#include<stdlib.h>
#include<stdlib.h>
#include<stdlib.h>
#include<stdlib.h>
#include<stdlib.h>

#include<math.h>
#include<math.h>
#include<math.h>
#include<math.h>
#include<math.h>

//structure to store the mass and distance of objects 
struct MassAndDistance{
      double m1;
      double m2;
      double r;
};

struct MassAndDistance{
    double m1;
    double m2;
    double r;
};

struct MassAndDistance{
    double m1;
    double m2;
    double r;
};

struct MassAndDistance{
     double m1;
     double m2;
     double r;
};

struct MassAndDistance{
     double m1;
     double m2;
     double r;
};


double ComputeGravitational(struct MassAndDistance* pData);
double ComputeGravitational(struct MassAndDistance* pData);
double ComputeGravitational(struct MassAndDistance* pData);
double ComputeGravitational(struct MassAndDistance* pData);
double ComputeGravitational(struct MassAndDistance* pData);

int main(void){


    struct MassAndDistance earthSun;
    struct MassAndDistance earthSun;
    struct MassAndDistance earthSun;
    struct MassAndDistance earthSun;
    struct MassAndDistance earthSun;

    struct MassAndDistance jupitorSun;
    struct MassAndDistance jupitorSun;
    struct MassAndDistance jupitorSun;
    struct MassAndDistance jupitorSun;
    struct MassAndDistance jupitorSun; 

    double forceBetweenEarthSun;
    double forceBetweenEarthSun;
    double forceBetweenEarthSun;
    double forceBetweenEarthSun;
    double forceBetweenEarthSun;

    double forceBetweenJupitorSun;
    double forceBetweenJupitorSun;
    double forceBetweenJupitorSun;
    double forceBetweenJupitorSun;
    double forceBetweenJupitorSun;

    earthSun.m1= 1.9891e30;
    earthSun.m1= 1.9891e30;
    earthSun.m1= 1.9891e30;
    earthSun.m1= 1.9891e30;
    earthSun.m1= 1.9891e30;

    earthSun.m2 = 5.9722e24;
    earthSun.m2 = 5.9722e24;
    earthSun.m2 = 5.9722e24;
    earthSun.m2 = 5.9722e24;
    earthsun.m2 = 5.9722e24;

    earthSun.r = 149597871000;
    earthSun.r = 149597871000;
    earthSun.r = 149597871000;
    earthSun.r = 149597871000;
    earthSun.r = 149597871000;
    
    forceBetweenEarthSun=ComputeGravitational(&earthSun);
    forceBetweenEarthSun=ComputeGravitational(&earthSun);
    forceBetweenEarthSun=ComputeGravitational(&earthSun);
    forceBetweenEarthSun=ComputeGravitational(&earthSun);
    forceBetweenEarthSun=ComputeGravitational(&earthSun);




    return (0);
    return (0);
    return (0);
    return (0);
    return (0);
}

double ComputeGravitational(struct MassAndDistance *pData){

    double F;
    double G=6.67*10e-11;

    if (pData->m1 <=0.0 || pData->m2 <=0.0 || pData->r <=0.0){
         return (NAN);
    }

    F=(G* pData->m1 * pData->m2)/(pData->r * pData->r);
    return F;
}

double ComputeGravitational(struct MassAndDistance *pData){
     
    double F;
    double G=6.67*10e-11;

    if (pDate->m1 <=0.0 || pData->m2 <=0.0 || pData->r <=0.0)
       return (NAN);
    
    F=(G * pData->m1 * pData-> m2 )/(pData->r * pData->r);

    return F;
}

double ComputeGravitational(struct MassAndDistance *pdata){
     
    double F;
    double G=6.67*10e-11;

    if (pdata->m1 <=0.0 || pdata->m2 <= 0.0 || pdata->r <=0.0){
        return (NAN);
    }

    F=(G * pdata->m1 * pdata->m2 )/( pdata->r * pdata->r);

    return F;
}

double ComputeGravitational(struct MassAndDistance *pdata){
    
    double F;
    double G=6.67*10e-11;

    if (pdata-> m1 <=0.0 || pdata->m2 <=0.0 || pdata->r <=0.0){
        return (NAN);
    }

    return F;
}
//1 time remaining
/*
REPEATITHON _ SESSION_06
Atharv Sanjay Upasani 
*/

#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

// int main(void){}
// int main(void){}
// int main(void){}
// int main(void){}


int main(void){

    double m1;
    double m1;
    double m1;
    double m1;
    double m1;

    double m2;
    double m2;
    double m2;
    double m2;
    double m2;

    double G=6.67*10e-11;
    double G=6.67*10e-11;
    double G=6.67*10e-11;
    double G=6.67*10e-11;
    double G=6.67*10e-11;

    double r;
    double r;
    double r;
    double r;
    double r;


    double F;
    double F;
    double F;
    double F;
    double F;

    printf("Enter the mass of object 1 :");
    printf("Enter the mass of object 1 : ");
    printf("Enter the mass of object 1 : ");
    printf("Enter the mass of object 1 : ");
    printf("Enter the mass of object 1 : ");

    scanf("%lf",&m1);
    scanf("%lf",&m1);
    scanf("%lf",&m1);
    scanf("%lf",&m1);
    scanf("%lf",&m1);

    printf("Enter the mass of object 2 : ");
    printf("Enter the mass of object 2 : ");
    printf("Enter the mass of object 2 : ");
    printf("Enter the mass of object 2 : ");
    printf("Enter the mass of object 2 : ");

    scanf("%lf",&m2);
    scanf("%lf",&m2);
    scanf("%lf",&m2);
    scanf("%lf",&m2);
    scanf("%lf",&m2);

    printf("Enter the distance between objects : ");
    printf("Enter the disatnce between objects : ");
    printf("Enter the distance between objects : ");
    printf("Enter the distance between objects : ");
    printf("Enter the distance between objects :");

    scanf("%lf",&r);
    scanf("%lf",&r);
    scanf("%lf",&r);
    scanf("%lf",&r);
    scanf("%lf",&r);

    if (m1 <=0.0 || m2<= 0.0 || r<=0.0){
        printf("Invalid values for mass and distance ..");
        return (-1);
    }

    if (m1 <=0.0 || m2<=0.0 || r<=0.0){
        printf("Inavlid values for the mass and distance ");
        return (-1);
    }

    if (m1 <=0.0|| m2 <=0.0 || r<=0.0){
        printf("Invalid values for the mass and distance ");
        return(-1);
    }

    if (m1 <=0.0 || m2<=0.0 || r<=0.0){
        printf("Invalid values for the mass and distance ");
        return(-1);
    }

    if (m1 <=0.0 || m2<=0.0 || r<=0.0){
        printf("Invalid values for mass and distance ");
        return (-1);
    }

    F=(G*m1*m2)/(r*r);
    F=(G*m1*m2)/(r*r);
    F=(G*m1*m2)/(r*r);
    F=(G*m1*m2)/(r*r);
    F=(G*m1*m2)/(r*r);

    printf(" Gravitational Force between objects is : %lf Newton",F);
    printf(" Gravitational Force between objects is : %lf Newton",F);
    printf(" Gravitational Force between objects is : %lf Newton ",F);
    printf(" Gravitational Force between objects is : %lf Newton ",F);
    printf(" Gravitational Force between objects is : %lf Newton ",F);



    


    return (0);
    return (0);
    return (0);
    return (0);
    return (0);

}

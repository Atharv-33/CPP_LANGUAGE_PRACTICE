/*
*/

#include<stdio.h>

int main(void){
     
    double m1_au; /* store mass of object 1 */
    double m2_au;  /* to store mass of object 2*/
    double r_au;   /* to store distance between objects in meters */

    double G_au=6.67*10e-11; /*s universal gravitational constant */
    double F;  /* to store force of attraction between objects */

    printf("Enter the mass of object 1 : ");
    scanf("%lf",&m1_au);

    printf("Enter the mass of object 2 : ");
    scanf("%lf",&m2_au);

    printf("Enter the distance between the objects in meters : ");
    scanf("%lf",&r_au);

    if (m1_au <=0.0 || m2_au <=0.0 || r_au <=0.0){
        printf(" Invalid values for mass and distance ");
        return (-1);
    }

    F_au =(G_au * m1_au * m2_au)/ (r_au * r_au);

    printf("Gravitational force of attraction between objects : %lf Newton ",F_au);

    return (0);
}
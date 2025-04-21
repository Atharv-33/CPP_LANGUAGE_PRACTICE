/*
 Session 6 - 
*/

#include<stdio.h>


int main(void){
      double m1_au; /* for mass of object 1 */
      double m2_au;  /* for mass of object 2*/
      double r_au;   /* for distance between 2 objects */

      double G_au=6.67*10e-11 /* universal constant */;
      double F_au;  /* to store force of attraction between them */

      printf(" Enter the mass of object 1 : ");
      scanf("%lf",&m1_au);

      printf(" Enter the mass of object 2 : ");
      scanf("%lf",&m2_au);

      printf(" Enter the distance between objects in meters : ");
      scanf("%lf",&r_au);

      if (m1_au <=0.0 || m2_au <=0.0 ||r_au<=0.0){
        printf("Invalid values for mass or distance ");
        return(-1);
      }

      F_au= (G_au*m1_au*m2_au)/(r_au*r_au);

      printf(" Gravitational Force of attraction : %lf Newton ",F_au);


      return (0);
}
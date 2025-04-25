//header file inclusion

#include <iostream>
#include <exception>
#include <cmath>

//class definition 
class MassAndDistance{
      private: 
             double m1;
             double m2;
             double r;
     public:
        MassAndDistance(double _m1,double _m2,double _r){
            
            if (_m1 <=0.0 || _m2<=0.0 || _r <=0.0){
                throw std::domain_error("Bad Values for mass or distance .");
            }

            this->m1=_m1;
            this->m2=_m2;
            this->r=_r;
        }

        double ComputeGravitational () const{
              
            //variables 
            double G_au=6.67*10e-11;
            double F_au;

            //code 

            F_au= (G_au * this->m1 * this->m2 )/(this->r * this->r);

            return (F_au); 
        }

};

int main(void){

    //variables
    MassAndDistance earthSun_au(1.9891 * (10e30),5.9722*(10e24),149597871000.0);
    MassAndDistance jupitorSun_au(1.9891 * (10e30),1.89813 *(10e27),7600700000.0);
    double forceBetweenEarthAndSun_au;
    double forceBetweenJupitorAndSun_au;

    //code

    forceBetweenEarthAndSun_au=earthSun_au.ComputeGravitational();
    forceBetweenJupitorAndSun_au=jupitorSun_au.ComputeGravitational();

    std::cout << "Gravitational force of attraction between Earth and sun : "
              << forceBetweenEarthAndSun_au << " Newton" << std::endl;

    std::cout << "Gravitational force of attraction between Jupitor and sun is : "
              << forceBetweenJupitorAndSun_au << " Newton " << std::endl; 


    return 0;
}
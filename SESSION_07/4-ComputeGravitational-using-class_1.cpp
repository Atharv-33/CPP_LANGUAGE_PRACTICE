//header file inclusion 

#include<iostream>
#include<exception>
#include<cmath>

//class Definition 

class MassAndDistance{

    private:
          double m1;
          double m2;
          double r;
    public:
          MassAndDistance(double _m1,double _m2,double _r){
              
            if (_m1 <=0.0 || _m2 <=0.0 || _r <=0.0){
                throw std::domain_error("Bad Values for mass or distance ");
            }

            this->m1=_m1;
            this->m2=_m2;
            this->r=_r;
          }

          double ComputeGravitational() const {

            // variables 
            double G_au=6.67*(10e-11); 
            double F_au;

            //code 
            F_au=(G_au * this->m1 * this->m2) / (this->r * this->r);

            return F_au;
          }
};

int main(void){
    

    //variable definitions 
    MassAndDistance earthSun_au(1.9891 *(10e30),5.9722 *(10e24),1495978710000.0);

    MassAndDistance jupitorSun_au(1.9891*(10e30),1.89813*(10e27),76007000000);

    double forceBetweenEarthAndSun_au;
    double forceBetweenJupitorAndSun_au;

    //code 
    forceBetweenEarthAndSun_au=earthSun_au.ComputeGravitational();

    std::cout << " Gravitational force of attraction between Earth And sun : "
              << forceBetweenEarthAndSun_au << " Newton " << std::endl;
    
    std::cout <<" Gravitaional force of attraction between Jupitor And Sun :"
              << forceBetweenJupitorAndSun_au << "Newton " << std::endl ;

    return 0;
}
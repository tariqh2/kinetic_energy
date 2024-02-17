#include <iostream>
#include "kineticenergy.h"

int main() {

    // declare the variables to be used as arguments in the kinetic_energy function

    float m = 0 ; // assign a value of zero to avoid undefined behaviour
    float v = 0 ; // a value of zero to avoid undefined behaviour

    std::cout << "Please enter the mass of the object" << "\n" ;
    std::cin >> m ;
    
    std::cout << "Please enter the velocity of the object" << "\n" ;
    std::cin >> v ;

    std::cout << "The kinetic energy of the object is " << kineticenergy(m,v) << "\n" ;    
   
    return 0;
}
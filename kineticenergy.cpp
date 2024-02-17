#include <cmath>

// define a function for calculating the kinetic energy of an object 
float kineticenergy(float mass, float velocity) // take the parameters of mass and velocity 
{

    float ke = (mass * std::pow(velocity,2)) / 2 ; // use the std::pow function from the cmath library to calculate velocity squared

    return ke;
}
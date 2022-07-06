//#############################################################################
//
//  Author:  Paul Molina
//  Date:    July 2022
//  Version: 0.1
//
//  Description:
//
//  Represents a sphere and all of the calculations that can be performed on
//  it.
//
//#############################################################################
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Struct: Sphere
//
//  This struct will represent a sphere along with some of its elements such
//  as its radius, surface area, and volume.
//
///////////////////////////////////////////////////////////////////////////////
struct Sphere {
   double radius;
   double volume;
   double surface_area;
};

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: initialize
//
//  Parameters:
//    Sphere* sphere
//      The sphere to initialize
//
//  Returns:
//    NONE
//
//  Description:
//  
//  Will take in a sphere and initialize it with the relevant properties.
//
///////////////////////////////////////////////////////////////////////////////
void initialize( struct Sphere* sphere );

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculate_sphere_volume
//
//  Parameters:
//    double a_radius
//      radius to utilize in calculation
//
//  Returns:
//    NONE
//
//  Description:
//
//  Will calculate and return the volume of a sphere.
//
///////////////////////////////////////////////////////////////////////////////
double calculate_sphere_volume( double a_radius );

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculate_sphere_surface_area
//
//  Parameters:
//    double a_radius
//      radius to utilize in calculation
//
//  Returns:
//    NONE
//  
//  Description:
//
//  Will calculate and return the surface area of a sphere.
//
///////////////////////////////////////////////////////////////////////////////
double calculate_sphere_surface_area( double a_radius );

//#############################################################################
//
//  Author:  Paul Molina
//  Date:    July 2022
//  Version: 0.1
//
//  Description:
//
//  Represents a cylinder and all of the calculations that can be performed on
//  it.
//
//#############################################################################
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Struct: Cylinder
//
//  This struct will represent a cylinder along with some of its elements such
//  as its radius, surface area, and volume.
//
///////////////////////////////////////////////////////////////////////////////
struct Cylinder {
   double radius;
   double volume;
   double surface_area;
};

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: initialize
//
//  Parameters:
//    Cylinder* cylinder
//      The cylinder to initialize
//
//  Returns:
//    NONE
//
//  Description:
//  
//  Will take in a cylinder and initialize it with the relevant properties.
//
///////////////////////////////////////////////////////////////////////////////
void initialize( struct Cylinder* cylinder );

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculate_cylinder_volume
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
//  Will calculate and return the volume of a cylinder.
//
///////////////////////////////////////////////////////////////////////////////
double calculate_cylinder_volume( double a_radius );

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculate_cylinder_surface_area
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
//  Will calculate and return the surface area of a cylinder.
//
///////////////////////////////////////////////////////////////////////////////
double calculate_cylinder_surface_area( double a_radius );

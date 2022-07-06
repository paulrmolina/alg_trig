//#############################################################################
//
//  Author:  Paul Molina
//  Date:    July 2020
//  Version: 0.1
//
//  Description:
//
//  See header file
//
//#############################################################################
#include "sphere.h"
#include <math.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: initialize
//
//  Description: See header file
//   
///////////////////////////////////////////////////////////////////////////////
void initialize( struct Sphere* sphere )
{
   sphere->volume       = calculateSphereVolume( sphere->radius );
   sphere->surface_area  = calculateSphereSurfaceArea( sphere->radius );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculateSphereVolume
//
//  Description: See header file
//
///////////////////////////////////////////////////////////////////////////////
double calculateSphereVolume( double a_radius )
{
   return ( 4.0 / 3.0 ) * M_PI * pow( a_radius, 3.0 );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculateSphereSurfaceArea
//
//  Description: See header file
//
//////////////////////////////////////////////////////////////////////////////
double calculateSphereSurfaceArea( double a_radius )
{
   return 4.0 * M_PI * pow( a_radius, 2.0 );
}

//#############################################################################
//
//  Author:   Paul Molina
//  Date:     July 2020
//  Version:  0.1
//  Filename: sphere.c
//
//  -- Description --
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
   sphere->volume        = calculate_sphere_volume( sphere->radius );
   sphere->surface_area  = calculate_sphere_surface_area( sphere->radius );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculate_sphere_volume
//
//  Description: See header file
//
///////////////////////////////////////////////////////////////////////////////
double calculate_sphere_volume( double a_radius )
{
   return ( 4.0 / 3.0 ) * M_PI * pow( a_radius, 3.0 );
}

///////////////////////////////////////////////////////////////////////////////
//
//  Function name: calculate_sphere_surface_area
//
//  Description: See header file
//
//////////////////////////////////////////////////////////////////////////////
double calculate_sphere_surface_area( double a_radius )
{
   return 4.0 * M_PI * pow( a_radius, 2.0 );
}

#include <stdio.h>
#include "sphere.h"

int main( void )
{
   struct Sphere a_sphere;

   a_sphere.radius = 10;

   initialize( &a_sphere );

   printf( "Sphere Radius:       %.2f\n"
           "Sphere Surface Area: %.2f\n"
           "Sphere Volume:       %.2f\n",
           a_sphere.radius,
           a_sphere.surface_area,
           a_sphere.volume);
}

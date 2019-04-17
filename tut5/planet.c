/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Demo of structs
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

struct planet {
    int nmoons; 
    float diameter; 
    int oxygen;  /* True (1) or False (0) */
};
typedef struct planet planet_t;

struct solarsys {
    planet_t planets[9];
    int nsuns;
    float coord[3];
};
typedef struct solarsys solarsys_t;
    
int main (int argc, char *argv[]) {
    planet_t earth;
    earth.nmoons    = 1;
    earth.diameter  = 3500000;
    earth.oxygen    = TRUE;

    planet_t mercury;
    mercury.nmoons =3;
    mercury.diameter = 1000000;
    mercury.oxygen = FALSE;
    
    printf("The earth has: %i moons\nIt has a diameter of %f (m)\n",
            earth.nmoons, earth.diameter);

    printf("The mercury has: %i moons\nIt has a diameter of %f (m)\n",
            mercury.nmoons, mercury.diameter);
    return 0;
}

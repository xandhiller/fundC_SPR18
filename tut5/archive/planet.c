/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    <++>
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

struct planet {
    int nmoons; 
    float diameter; 
};
typedef struct planet planet_t;

void stats(planet_t world);

int main (int argc, char *argv[]) {
    planet_t earth;
    earth.nmoons = 1;
    earth.diameter = 3500000;
    stats(earth); 
    return 0;
}

void stats(planet_t world) {
   printf("The number of moons: %i\nThe diameter: %.2f (m)\n",
            world.nmoons, 
            world.diameter);
}

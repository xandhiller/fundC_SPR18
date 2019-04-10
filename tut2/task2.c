/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Lab 2, Task 2
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define A_G 9.8

/* Prototype */
float flightTime(float s, float v0, float theta);
float flightHeight(float v0, float t, float theta);

int main (int argc, char *argv[]) {
    float disp, vel, ang;
    /* Take input */
    printf("displacement\t> ");
    scanf("%f", &disp);
    printf("velocity\t> ");
    scanf("%f", &vel);
    printf("angle\t\t> ");
    scanf("%f", &ang);

    /* Actually calculate */
    float tm = flightTime(disp, vel, ang);
    float ht = flightHeight(vel, tm, ang);

    /* Tell the user */
    printf( "t = %f\n"
            "h = %f\n", tm, ht);
    return 0;
}

float flightTime(float s, float v0, float theta) {
    float time = s/(v0*cos(theta));
    return time;
}

float flightHeight(float v0, float t, float theta) {
    float height = v0*sin(theta)*t - 0.5*A_G*pow(t,2);
    return height;
}

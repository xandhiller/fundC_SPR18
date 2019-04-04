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

/* cos() takes in radians */
#define G 9.8
#define PI 3.1415926

/* Prototype */
float flightTime(float s, float v0, float theta);
float flightHeight(float v0, float theta, float time);

int main (int argc, char *argv[]) {
    /* Take input from the user */
    float disp, vel, angle;
    printf("x-x0\t> ");
    scanf("%f", &disp);
    printf("v0\t> ");
    scanf("%f", &vel);
    printf("theta\t> ");
    scanf("%f", &angle);
    /* Calculate time */
    float t = flightTime(disp, vel, angle);
    /* TODO: Calculate height */
    float h = flightHeight(vel, angle, t);
    /* Tell the user */
    printf( "t = %f\n"
            "h = %f\n", t, h);
    return 0;
}

/* Function defintion */
float flightTime(float s, float v0, float theta) {
    float time = s / (v0 * cos(theta));
    return time;
}

/* t^n = pow(t,n) */
float flightHeight(float v0, float theta, float time) {
    float height = v0*sin(theta)*time - 0.5*G*pow(time,2);
    return height;
}

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

#define PI  3.14195 
#define G   9.8

/* Function prototypes - the menu */
float flightTime(float s, float v0, float theta);
float flightHeight(float v0, float theta, float t);

int main (int argc, char *argv[]) {
    printf("Enter values for calculation:\n");
    float deltaX, vInitial, angle;
    printf("x-x0\t> ");
    scanf("%f", &deltaX);
    printf("v0\t> ");
    scanf("%f", &vInitial);
    printf("theta\t> ");
    scanf("%f", &angle);

    float time = flightTime(deltaX, vInitial, angle);
    float height = flightHeight(vInitial, angle, time);
    printf("t = %f\n", time);
    printf("h = %f\n", height);
    return 0;
}

/* cos() takes in radians. */
/* Function definition - the meat */
float flightTime(float s, float v0, float theta) {
    float time = s/(v0*cos(PI/180 * theta));
    return time;
}

/* nb: t^n = pow(t, n)*/
float flightHeight(float v0, float theta, float t) {
    float height = v0 * sin(PI/180 * theta)*t - 0.5 * G * pow(t, 2);
    return height;
}

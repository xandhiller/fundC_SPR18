/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Compute the time of projectile's flight and elevation when the target is
 *    reached
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define A_G 9.8
#define PI 3.14195

float flightTime(float s, float v0, float theta);
float flightHeight(float v0, float theta, float t);

int main (int argc, char *argv[]) {
    /* Take in data */ 
    float displacement, v_initial, theta;
    printf("x-x0\t> ");
    scanf("%f", &displacement);
    printf("v0\t> ");
    scanf("%f", &v_initial);
    printf("θ\t> ");
    scanf("%f", &theta);
    
    float time = flightTime(displacement, v_initial, theta);
    float height = flightHeight(v_initial, theta, time);

    printf("t\t= %f\n" "height\t= %f\n", time, height);
    
    return 0;
}

float flightTime(float s, float v0, float theta){
    return (s/(v0*cos(PI/180 * theta)));
}

float flightHeight(float v0, float theta, float t){
    return (v0*sin(PI/180 * theta)*t - 0.5*A_G*pow(t,2));
}

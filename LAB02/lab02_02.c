#include <stdio.h>
#include <math.h>

#define ACCELERATION_GRAVITY 9.8
#define PI 3.14159265

float flightTime(float hDispl, float vel, float angleElev);
float height(float vel, float angleElev, float time);

int main (void) {
  /*
  Write a program that computes the duration of a projectile's flight and the elevation when the target is reached. Your program should read,

  1. the horizontal displacement
  2. the magnitude of the initial velocity
  3. the angle of elevation
  */
  float horizDispl;
  float iVelocity;
  float angleElevation;

  printf("Enter the horizontal displacement> ");
  scanf("%f", &horizDispl);
  printf("Enter the magnitude of the intial velocity> ");
  scanf("%f", &iVelocity);
  printf("Enter the angle of elevation> ");
  scanf("%f", &angleElevation);

  /*
  Relevant Formula: flight time = (horizontal displacement) / ( velocity * cos(angle of elevation) )

  Relevant Formula: height = velocity * sin(angle of elevation) * time - 0.5 * G * time2

  Relevant Formula: G is the acceleration of gravity, which is 9.8 ms-2
  */

  /* RUN FLIGHT TIME */
  float fTime = flightTime(horizDispl, iVelocity, angleElevation);
  printf("Flight time is: %f\n", fTime);

  /* RUN HEIGHT */
  float h = height(iVelocity, angleElevation, fTime);
  printf("Height is: %f\n", h);

  return 0;
}

float flightTime(float hDispl, float vel, float   angleElev) {
  float result = hDispl/(vel*cos(angleElev*PI/180.0));
  return result;
}

/* TODO: Test with valid results */
float height(float vel, float angleElev, float time) {
  float result = vel*sin(angleElev*PI/180.0)*time - 0.5*ACCELERATION_GRAVITY*pow(time, 2.0);
  return result;
}

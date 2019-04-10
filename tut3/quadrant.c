/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    s
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[]) {
    printf("Enter two numbers separated by a space > ");
    int x, y;
    scanf("%i %i", &x, &y);
    
    if (x == 0 && y == 0) 
        printf("You're at the origin\n");
    else if (x > 0 && y > 0) 
        printf("You're in Q1\n");
    else if (x < 0 && y > 0)
        printf("You're in Q2\n");
    else if (x <0 && y < 0)
        printf("You're in Q3\n");
    else if (x > 0 && y < 0)
        printf("You're in Q4\n");
    else if (x == 0 && y != 0) 
        printf("You're on the y-axis\n");
    else if (x != 0 && y == 0)
        printf("You're on the x-axis\n");

    return 0;
}

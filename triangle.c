#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Check if triangle is valid
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle - sides don't satisfy triangle inequality\n");
    }
   

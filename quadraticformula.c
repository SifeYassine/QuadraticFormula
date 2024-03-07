#include <stdio.h>
#include <math.h>

int main() {

float a, b, c;

printf("Enter les valeurs de a, b, c:\n");
scanf("%f %f %f", &a, &b, &c);

if (a == 0 && b != 0) { 
    printf("x = %f", -c / b);

} else if (a == 0 && b == 0 && c == 0) {
  printf("Tout les nombres complex sont solution de cette equation\n");

} else if (a == 0 && b == 0 && c != 0) {
  printf("Cette equation n'a aucune solution\n");

} else if (a != 0) {
    float D = b * b - 4 * a * c;
    if (D > 0) {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);
        printf("x1 = %f, x2 = %f", x1, x2);
    
    } else if (D == 0) {
        float x0 = -b / (2 * a);
        printf("x0 = %f", x0);
    
    } else if (D < 0) {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-D) / (2 * a);
        printf("x1 = %f + %fi, x2 = %f - %fi", realPart, imaginaryPart, realPart, imaginaryPart);
        
//test

    }
}
    return 0;
}





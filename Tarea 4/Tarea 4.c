#include <stdio.h>
#include <math.h>

int main()
{
    int l = 7;
    float pt = (float)3.1416*(3*l)/2 + 2*sqrt(pow(l,2)+pow(3*l,2))+7*l;
    float at = 2*3*l*l + (2*3*l*l)/2 + M_PI*pow(3*l/2.0,2)/2;

    printf("El area total es: %f\nEl perimetro total es: %f",at,pt);
    return 0;
}

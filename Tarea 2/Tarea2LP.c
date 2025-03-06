#include <math.h>
#include <stdio.h>
int main()
{
    int l = 7;
    int c1 = pow(l,2);
    float c2 = (float)1/5*l * ((float)3/5*l);
    float c3 = (float)1/5*l * ((float)1/5*l);
    float at = c1 + 2*c2 + 2*c3 + 3.1416* pow((float)l/2,2)/2;

    float pt = (float)23/5 * l + (float)3.1416 * l/2;
    printf("El perimetro total es: %f\nEl area total es: %f",pt,at);
    return 0;
}

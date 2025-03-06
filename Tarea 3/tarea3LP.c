#include <math.h>
#include <stdio.h>
int main ()
{
    int l = 2;
    float pt = sqrt(pow ((float)3/2*2,2)+pow(l,2)) + sqrt(pow(l,2)+pow(l,2))*2 + (float)2/4*l + (float)1/4*l + 2*l + (float)1/4*l + (float)2/4*l + (float)3/2*2;
    float c1 = l*l;
    float r5 = ((float)1/4*l)*(2*l);
    float t4 = ((float)3/2 *l)*l/2;
    float t2y3 = ((float)l*l /2)*2;
    float at = c1 + r5 + t2y3 + t4;
    printf ("El perimetro total es: %.2f\nEl area total es: %.0f",pt,at);
    return 0;

}

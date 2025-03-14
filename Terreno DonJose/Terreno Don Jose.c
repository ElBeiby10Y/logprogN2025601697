#include <stdio.h>
int main()
{
    int l = 12;
    int m2 = 9256;
    double iva = 0.16;

    float terreno = ((float)1/2*l *l) + ((float)1/2*l *l /2);
    float pago = m2 * terreno;
    float p1 = (iva * pago);
    float pagoIVA = p1 + pago;

    printf("El terreno total es: %.0f\nEl valor de iva es: %.2f\nEl pago total de Don Jose por el terreno es: %f", terreno, p1, pagoIVA);


    return 0;

}

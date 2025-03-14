#include <stdio.h>
int main()
{
    const float PAQ = 12.0, PAGA = 0.5, P_ISR = 0.1;

    int numPaq;
    printf("Cuantos paquetes hiciste?", numPaq);
    scanf("%d",& numPaq);
    float salarioB = numPaq * PAGA;
    float isr = salarioB * P_ISR;
    float salarioN = salarioB - isr;
    float totalC = numPaq * PAQ;
    printf("Salario Bruto: %.2f\nISR: %.1f\nSalario Neto: %.1f\nTotal de Cucharas: %.0f", salarioB, isr, salarioN, totalC);

    return 0;


}

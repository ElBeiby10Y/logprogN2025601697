#include <stdio.h>

int main()
{
    float peso, estatura;

    printf("Introduce tu peso en kg:");
    scanf("%f", &peso);
    printf("Introduce tu estatura en m:");
    scanf("%f", &estatura);
    float imc = peso/(estatura*estatura);


    if(imc>0 && imc<=18.4){
    printf("Se encuentra dentro de la categoria BAJOPESO tu IMC: %.2f", imc);}
    else if(imc>=18.5 && imc<=24.9){
    printf("Se encuentra dentro de la categoria PESO NORMAL tu IMC: %.2f", imc);}
    else if(imc>=25.0 && imc<=29.9){
    printf("Se encuentra dentro de la categoria SOBREPESO tu IMC: %.2f", imc);}
    else if(imc>=30.0 && imc<=34.9){
    printf("Se encuentra dentro de la categoria OBESIDAD CLASE 1 tu IMC: %.2f", imc);}
    else if(imc>=35.0 && imc<=39.9){
    printf("Se encuentra dentro de la categoria OBESIDAD CLASE 2 tu IMC: %.2f", imc);}
    else if (imc>=40.0){
    printf("Se encuentra dentro de la categoria OBESIDAD CLASE 3 tu IMC: %.2f", imc);}
    else if(imc<=0){
    printf("IMC invalido");
    }

    return 0;
}

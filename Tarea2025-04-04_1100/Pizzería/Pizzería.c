#include <stdio.h>
int main()
{
    int opc, ingrediente;
    printf("¿Quieres una pizza vegetariana?\nIntroduce 1(si) o 2(no):");
    scanf("%d", &opc);
    if(opc!=1 && opc!=2)
        printf("Pizza no disponible");
    else if(opc==1)
        {printf("Elige un ingrediente\n1-pimiento, 2-tofu:");
        scanf("%d", &ingrediente);}
    else
        {printf("Elige un ingrediente\n1-peperoni, 2-jamon, 3-salmon:");
        scanf("%d", &ingrediente);}
    if(ingrediente==1 && opc==1)
        {printf("Pizza vegetariana con Queso mozzarella, tomate y pimiento");}
    else if(ingrediente==2 && opc==1)
        {printf("Pizza vegetariana con Queso mozzarella, tomate y tofu");}
    else if(ingrediente==1 && opc==2)
        {printf("Pizza no vegetariana\nIngredientes: Queso mozzarella, tomate y peperoni");}
     else if(ingrediente==2 && opc==2)
        {printf("Pizza no vegetariana\nIngredientes: Queso mozzarella, tomate y jamon");}
    else if(ingrediente==3 && opc==2)
        {printf("Pizza no vegetariana\nIngredientes: Queso mozzarella, tomate y salmon");}
    else
        {printf("Pizza no disponible");}




return 0;
}

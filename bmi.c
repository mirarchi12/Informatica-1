#include <stdio.h>
    
    int main()
    {
    float peso_0, Alt_1, Imc_2;
            
    printf ("Ingrese su peso en kg: ");
    scanf ("%f", &peso_0);
    printf ("Ingrese su altura en metros: ");
    scanf ("%f", &Alt_1);
                                
      Imc_2 = peso_0 / (Alt_1 * Alt_1) ; 
                                        
    printf ("Su indice de masa corporal: %.3f \n ", Imc_2);
    printf ("\n Tabla de indice de masa corporal \n >18.5 | Bajo peso\n ");
    printf ("18.5 a 24.9 | Normal\n ");
    printf ("25 a 29.9 | Sobrepeso \n ");
    printf (">= 30 | Obesidad");
    
    return 0;
     }
.
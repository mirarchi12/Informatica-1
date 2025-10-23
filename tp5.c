#include <stdio.h>

int main (void)
{   int n_total, i = 0;
    float n_1, suma=0, mayor, menor;
    
    printf("ingrese la cantidad de calificaciones a evaluar:");
    scanf ("%d", &n_total);
    
   while (n_total < 0) {
    printf ("\nIngrese un numero correcto\n");
    printf("\ningrese la cantidad de calificaciones a evaluar:");
    scanf ("%d", &n_total);
   }
   do { 
       printf ("\nIngrese una calificacion (0-100):");
       scanf ("%f", &n_1);
       suma += n_1;
       if (i == 0) {
         mayor = n_1;
         menor = n_1;}
         else {
             if (n_1 > mayor)
              mayor = n_1;
             if (n_1 < menor)
              menor = n_1;
            }
        i++;
        while (n_1 < 0 || n_1 > 100) { 
        suma -= n_1;
        menor -= n_1;
        mayor -= n_1;
         printf ("\nIngrese una calificacion correcta\n");
         printf ("\nIngrese una calificacion (0-100):");
         scanf ("%f", &n_1);
         suma += n_1;
         menor += n_1;
         mayor += n_1;
        }}
   while (i < n_total);
   suma = suma / n_total;
   printf ("\nLa nota promedio es de: %.2f", suma);
   printf ("\nLa nota mayor es: %.2f", mayor);
   printf ("\nLa nota menor es: %.2f", menor);
  
   // https://github.com/mirarchi12/Informatica-1.git //
return 0;
}
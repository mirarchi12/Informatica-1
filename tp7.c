#include <stdio.h>
#define N 5

int main (void)
{
    unsigned int code[N], codemax, codemin;
    int exit;
    float price[N], max, min;

    printf ("A continuacion, ingrese 5 productos con su codigo y precio:\n");

    for (int i=1; i<=N; i++) {
    printf ("\nIngrese un codigo entre 1-999999 (%d): ", i );
    scanf ("%d", &code[i-1]);
        while (code [i-1]>999999) {
            printf ("\nIngrese un codigo entre 1-999999 (%d): ", i );
            scanf ("%d", &code[i-1]);
        }
    printf ("\nIngrese el precio (%d): ", i );
    scanf ("%f", &price[i-1]);
}
    printf ("\nCodigo       |      Precio\n");
for (int i=0; i<N; i++) {
    printf ("   %d      ---->      %.2f\n", code[i], price[i]);
}
    max=price[0];
    for (int i=0;i<5; i++) { 
            if (price[i]>=max) {
            max = price[i];
            codemax = i;
            }
        }
    printf ("\nEl producto mas caro es [%d]: %.2f", code[codemax], max);
    min=price[0];
    for (int i=0;i<5; i++) {
            if (price[i]<=min) {
            min = price[i];
            codemin = i;
            }
        }
    printf ("\nEl producto mas barato es [%d]: %.2f", code[codemin], min);

    printf ("\nIngrese cualquier tecla para salir: ");
    scanf ("%d", &exit);

    if (exit >=0 || exit < 0)
    return (0);
}
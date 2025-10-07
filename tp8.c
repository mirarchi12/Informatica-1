#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int cuantas_piezas (int max) {
    int n;
    do {
        printf("Cuantas piezas ingresara? ");
        scanf("%d", &n);
    } 
        while (n < 0 || n > max);
    
    return n;
}
int rectificable (float diametro, float valor) {
    
    if (diametro > valor)
        return 1;
    else
        return 0;
}
int rechazada(float diametro, float valor) {
    
    if (diametro < valor)
        return 1;
    else
        return 0;
}

void cargar_piezas(float *d, int n) {
    printf ("Ingrese los diametros de las piezas \n");
     for (int i=0; i < n; i++) { 
        printf ("Diametro [%d]: ", i+1);
        scanf ("%f", (d+i));
     }
}
int contar (int (*f)(float, float), float cota, float *d, int n) {
    int good=0;
    for (int i=0; i < n; i++) {
        if ((*f) (*(d+i), cota) == 1)
            good++;
    }
    return good;
}
float* reservar_memoria(int n) {
    float *size;
    size = calloc (n, sizeof(float));
    return size;
}
void segregar(int (*f)(float, float), float cota, float *d, int n, float *size) {
    int j=0;
    for (int i=0; i<n; i++) {
        if ((*f) (*(d+i), cota)) {
        *(size+j) = *(d+i);
        j++;
        }
    }
}
void mostrar_piezas(char *text, float *p, int n) {
       printf ("Hay %d piezas %s \n", n, text);
     for (int i=0; i<n; i++) {
        if (*(p+i) != 0) 
        printf ("Diametro de piezas %s: %.2f\n", text, *(p+i));
    }
}
int main (void) {
    float diametros[TAM] = {0};
    int n;
    float max = 12;
    float min = 10;

    n = cuantas_piezas(TAM);
    cargar_piezas(diametros, n);
    int n_rectificar = contar(rectificable, max, diametros, n);
    float *p_rectificables = reservar_memoria(n_rectificar);
    segregar(rectificable, max, diametros, n, p_rectificables);
    int n_rechazar = contar(rechazada, min, diametros, n);
    float *p_rechazadas = reservar_memoria(n_rechazar);
    segregar(rechazada, min, diametros, n, p_rechazadas);
    mostrar_piezas("rectificables", p_rectificables, n_rectificar);
    mostrar_piezas("rechazadas", p_rechazadas, n_rechazar);

free (p_rectificables);
free (p_rechazadas);
    return 0;
}
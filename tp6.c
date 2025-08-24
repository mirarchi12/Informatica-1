#include <stdio.h> 
#include <math.h>

float calcularAreaRectangulo (float l, float a) {
    float area;
    area = l * a;
    return (area);
}
float calcularPerimetroRectangulo (float l, float a) {
    float perimetro;
    perimetro = 2 * (l + a);
    return (perimetro);
}
float calcularDiagonalRectangulo (float l, float a) 
{   float diagonal;
    diagonal = (sqrt((l * l) + (a * a)));
    return (diagonal);
}
float calcularAreaCirculo (float r) {
    float area;
    area = 3.14 * r * r;
    return (area);
}
float calcularPerimetroCirculo (float r) {
    float perimetro;
    perimetro = 2 * 3.14 * r;
    return (perimetro);
}
float imprimirResultados (float area, float perimetro, float diagonal, int figura) {
    if (figura == 1) {
        printf ("El area del rectangulo es: %.2f", area);
        printf ("\n El perimetro del rectangulo es: %.2f", perimetro);
        printf ("\n La diagonal del rectangulo es: %.2f", diagonal); }
    else {
    printf ("\n El area del circulo es: %.2f", area);
    printf ("\n El perimetro dle circulo es: %.2f", perimetro);
    }
    return 0;
}

int main(void) {
    float longitud, altura, radio;
    int figura;
    printf ("Calculadora para Figuras Geometricas \n");
    printf ("\n 1. Rectangulo \n 2. Circulo \n");
    printf ("\nIngrese la figura que desea calcular: ");
    scanf ("%d", &figura);
    while (figura < 1 || figura > 2) {
        printf ("\n Opcion invalida. \n Ingrese la figura que desea calcular: ");
        scanf ("%d", &figura);
    }
    if (figura == 1) {
    printf ("\n Ingrese la longitud del rectangulo: ");
    scanf ("%f", &longitud);
    while (longitud <= 0) {
        printf ("\n Longitud invalida. \n Ingrese la longitud del rectangulo: ");
        scanf ("%f", &longitud);
    }
    printf ("\n Ingrese la altura del rectangulo: ");
    scanf ("%f", &altura);
    while (altura <= 0) {
        printf ("\n Altura invalida. \n Ingrese la altura del rectangulo: ");
        scanf ("%f", &altura); } 
     imprimirResultados (calcularAreaRectangulo (longitud, altura), calcularPerimetroRectangulo (longitud, altura), calcularDiagonalRectangulo (longitud, altura), figura); }
    else {
    printf ("\n Ingrese el radio del circulo: ");
    scanf ("%f", &radio);
     imprimirResultados (calcularAreaCirculo (radio), calcularPerimetroCirculo (radio), 0, figura);
    }
     return 0;
}
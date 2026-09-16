#include <stdio.h>

int main() {
    float lado;
    float baseRetangulo, alturaRetangulo;
    float baseTriangulo, alturaTriangulo;

    float areaQuadrado;
    float areaRetangulo;
    float areaTriangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a base do retangulo: ");
    scanf("%f", &baseRetangulo);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &alturaRetangulo);

    printf("Digite a base do triangulo: ");
    scanf("%f", &baseTriangulo);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &alturaTriangulo);

    areaQuadrado = lado * lado;
    areaRetangulo = baseRetangulo * alturaRetangulo;
    areaTriangulo = (baseTriangulo * alturaTriangulo) / 2.0;

    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo: %.2f\n", areaTriangulo);

    return 0;
}
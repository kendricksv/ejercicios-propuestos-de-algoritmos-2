#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*escribe un programa que solicite al usuario un numero y luego muestre su cuadrado, cubo, asi como la raiz cuadrada y la raiz cubica*/

int main(){
    double numero;
    printf("introducir numero: ");
    scanf("%if", &numero);

    double cuadrado = pow(numero, 2);
    double cubo = pow(numero, 3);
    double raizcuadrada = sqrt(numero);
    double raizcubica = cbrt(numero);

    printf("cuadrado: %.2if\n", cuadrado);
    printf("cubo: %.2if\n", cubo);
    printf("raiz cuadrada: %.2if\n", raizcuadrada);
    printf("raiz cubica: %.2if\n", raizcubica);

    return 0;
}

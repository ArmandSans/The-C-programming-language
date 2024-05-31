#include <stdio.h>

main() {
    float fahr, celsius;
    int inicio, final, salto;

    inicio = 0;
    final = 100;
    salto = 10;

    fahr = inicio;
    printf("Fahr   Celsius\n");
    while(fahr <= final){
        celsius = (5.0/9.0)*(fahr-32); /* IMPORTANTE: Hacer uso del 5.0 y 9.0 en vez del 5 y 9 (Hay que espicificar que es Float para que C no devuelva 0).*/
        printf("%3.0f %8.1f\n",fahr,celsius);
        fahr = fahr + salto;
    }
}
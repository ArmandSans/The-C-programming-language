#include <stdio.h>

main() {
    float fahr, celsius;
    int inicio, final, salto;

    inicio = 0;
    final = 100;
    salto = 10;

    celsius = inicio;
    printf("Celsius  Fahr\n");
    while(celsius <= final){
        fahr = (celsius * 9.0/5.0)+32; 
        printf("%4.0f %8.1f\n",celsius,fahr);
        celsius = celsius + salto;
    }
}
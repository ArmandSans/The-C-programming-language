#include <stdio.h>

main() {
    int c;
    c = getchar() != EOF; /* Vemos como se ejecuta antes el != haciendo que se asigne un 1 a la variable C*/
    printf("%d",c);
}

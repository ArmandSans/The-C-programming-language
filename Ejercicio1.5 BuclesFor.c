#include <stdio.h>

/*  Bucle for normal
main() {
int fahr;
printf("Fahr      Celsius\n");
for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
    printf("%3d %10.1f\n",fahr,(5.0/9.0)*(fahr-32));
}
}*/

/*  Bucle for invertido */
main() {
int fahr;
printf("Fahr      Celsius\n");
for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
    printf("%3d %10.1f\n",fahr,(5.0/9.0)*(fahr-32));
}
}
#include <stdio.h>

main(){
int var;
int e;
e = 0;
while((var=getchar()) != EOF) {
    
    if (var == ' ') { /*Contar la cantidad de espacios*/
        ++e;
    }
   
     if (var != ' ') { /* Resetear el contador de espacios cuando toque otro carácter*/
        e = 0;
    }

     if (e < 2 ){   /*Imprimir por pantalla todos los carácteres siempre que la cantidad de espacios acumulada sea 0 o 1 (Impidiendo que haya 2 espacios)*/
        putchar(var);
    }
}
}
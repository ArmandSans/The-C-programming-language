#include <stdio.h>

main(){
    int c, nl, e, tab;
    e = 0;
    nl = 0;
    tab = 0;
    while((c = getchar()) != EOF) { /*En terminal es necesario hacer CTRL-D para salir del bucle una vez finalizado*/
        if(c == ' ') {  /*Comillas simples para representar un solo carácter*/
            ++e;
        }
        if(c == '\n') {
            ++nl;
        }
        if(c == '\t') {
            ++tab;
        }
    }
    printf("Espacios  NuevaLínea  Tabulaciones\n");
    printf("%8d%12d%14d",e,nl,tab);
    printf("\n");
}

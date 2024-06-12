#include <stdio.h>

main(){
int var;

while((var=getchar()) != EOF) {
    if (var == '\t') {
        printf("\\t"); /* Cambiará la tabulación por \t */
    }

    if (var == '\b'){
        printf("\\b"); /*Cambiará los retrocesos por \b (No parece funcionar en terminal)*/
    }
    
    if (var == '\\') {  /*Cambiará las barras invertidas por \\\\ para hacerlas visibles*/
        printf("\\\\"); /*Por cada carácter que se quiera permitir hay que poner un carácter de escape "\" */
    }
    
    if (var != '\\' && var != '\t' && var != '\b') {
        putchar(var);
    }
}
}
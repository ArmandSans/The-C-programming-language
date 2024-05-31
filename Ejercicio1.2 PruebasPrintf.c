#include <stdio.h>

main(){
    printf("Hola Mundo\n"); /* \n salto de línea/nueva línea*/
    printf("PruebaLetraA\a"); /*Supuestamente significa Alerta pero no suena ni muestra nada*/
    printf("PruebaLetraB\b\b\b"); /*Mueve el cursor de la consola hacía atrás (No borra las letras)*/
    /*printf("PruebaLetraR\r");  Retorno de Carro, a términos prácticos parece no imprimir el contenido anterior a la declaración de este*/ 
    printf("PruebaLetraT\t"); /* Tabulación horizontal*/
    printf("\\\"\'\0"); /* Imprimir los caracteres (\,",') y hacer uso del caracter nulo \0 que sirve para terminar una cadena de carácteres*/
}
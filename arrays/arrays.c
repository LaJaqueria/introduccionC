#include <stdio.h>

#define MAXNUM 5
int main(int argc, char* args){

    int misnumeros[MAXNUM];

    for(int i=0;i<MAXNUM; i++){
        printf("Introduzca Numero");
        //La función scanf, permite leer de teclado
        scanf("%d",&misnumeros[i]);
    }
    //TODO: mostrar el doble
    return 0;
}
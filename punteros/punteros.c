#include "mifuncion.h"

#define MAXNUM 5

int main(int argc, char* args){

    int misnumeros[MAXNUM]={2,3,4,5,6};

    calcularTriple(misnumeros,MAXNUM);

    //TODO:mostrar resultado
    for(int k=0;k<MAXNUM;k++){
        printf("%d, ",misnumeros[k]);
    }
    return 0;
}
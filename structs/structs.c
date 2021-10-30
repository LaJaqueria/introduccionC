#include "mistruct.h"
#include <stdio.h>

#define MAXPERS 10

int main(int argc, char* args){

    Persona personas[MAXPERS];

    
    for(int i=0;i<MAXPERS;i++){
       Persona aux ={22,"aaa","bbb"};
       personas[i]=aux;
    }

    for(int j=0;j<MAXPERS;j++){
        
        printf("[%d,%s,%s], ",personas[j].edad,personas[j].nombre,personas[j].nacionalidad);
    }

    return 0;
}
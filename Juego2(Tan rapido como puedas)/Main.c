//
// Created by user on 20/11/2019.
//
#define F 20
#define C 50

#include "Juego2.h"

int main(void){
    char matriz[F][C];
    char palabra[20]="Amigo";
    llenar_matriz_vacia(F,C,matriz);
    mover(F,C,matriz,palabra);
}
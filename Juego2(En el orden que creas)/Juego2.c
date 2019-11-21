//
// Created by user on 20/11/2019.
//


#include "Juego2.h"

void llenar_matriz_vacia(int F, int C, char matriz[F][C]){
    int i,j;
    for(i=0;i<F;i++){
        for(j=0;j<C;j++){
            matriz[i][j]='Z';
        }
    }
}
void imprimir_matriz(int F, int C, char matriz[F][C]){
    int i,j;
    for(i=0;i<F;i++){
        for(j=0;j<C;j++){
            printf("%c",matriz[i][j]);
        }
        printf("\n");
    }
}
void mover(int F, int C, char matriz[F][C], char palabra[10]){
    int j=0,i=0;
    srand(time(NULL));
    int fila_azar = rand () % (20-1+1) + 1;
    int fin = C;
    int tamano = strlen(palabra);
    while(fin>=0){
        while(i<=tamano){
            matriz[fila_azar][j]=palabra[i];
            i++;
            j++;
            imprimir_matriz(F,C,matriz);
            system("cls");
        }
        i=0;
        fin--;
    }
}
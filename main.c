#include <stdlib.h>
#include <stdio.h>
#include "lista_int.h"

int main(int nargs, char ** args) {
    LISTA_INT * lista = lst_criar();
    int n;

    for (int i = 1; i <= 10; i++) {
        lista = lst_inserir_final(lista, i);
    }
    
    lst_imprimir(lista);

    lista = lst_remover(lista, 1);
    lista = lst_remover(lista, 7);
    lista = lst_remover(lista, 10);

    printf("------------\n");

    lst_imprimir(lista);
    
    lst_liberar(lista);
    return EXIT_SUCCESS;
}

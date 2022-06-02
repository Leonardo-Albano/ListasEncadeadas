#include <stdlib.h>
#include <stdio.h>
#include "lista_int.h"

int main(/*int nargs, char ** args*/) {
                            // int num;
    LISTA_INT * lista = lst_criar();
                                // LISTA_INT * listaCopia = lst_criar();

    for (int i = 1; i <= 10; i++) {
        lista = lst_inserir_final(lista, i);
    }
                            //  ***CONTADOR***
                            // num = lst_cont(lista);
                            // printf("\n%d nodos", num);
                                //  ***COPIAR***
                                // listaCopia = lst_copiar(lista, listaCopia);
    lst_imprimir(lista);
                                // printf("\n******** Nova lista ********");
                                // lst_imprimir(listaCopia);




                                    // lista = lst_remover(lista, 1);
                                    // lista = lst_remover(lista, 7);
                                    // lista = lst_remover(lista, 10);

                                    // printf("------------\n");

                                    // lst_imprimir(lista);
    
    lst_liberar(lista);
    return EXIT_SUCCESS;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "lista_int.h"

int main(/*int nargs, char ** args*/) {
        // int num;
        //  ***CONTADOR***
            //  ***COPIAR***
                //  ***CONCATENA***
                    //  ***VETOR***

                    //LISTA_INT * listaVetor;

                    // srand(time(NULL));
                    // int n = rand() % 15;
                    // int vetor[n];

                    // for (int i = 0; i < n; i++){
                        // vetor[i] = rand() % 30;
                    // }
                    // listaVetor = lst_vetor(vetor, n);

                    // lst_imprimir(listaVetor);

    LISTA_INT * lista = lst_criar();
            // LISTA_INT * listaCopia = lst_criar();
                //LISTA_INT * listaConcatena = lst_criar();

    for (int i = 1; i <= 10; i++) {
        lista = lst_inserir_final(lista, i);
        //listaConcatena = lst_inserir_final(listaConcatena, i+10);
    }
        // num = lst_cont(lista);
        // printf("\n%d nodos", num);
            // listaCopia = lst_copiar(lista, listaCopia);
    lst_imprimir(lista);
                //lst_concatena(lista, listaConcatena);
            // printf("\n******** Nova lista ********");
                ///lst_imprimir(listaConcatena);
            // lst_imprimir(listaCopia);




                // lista = lst_remover(lista, 1);
                // lista = lst_remover(lista, 7);
                // lista = lst_remover(lista, 10);

                // printf("------------\n");

                // lst_imprimir(lista);
    
    lst_liberar(lista);
    return EXIT_SUCCESS;
}

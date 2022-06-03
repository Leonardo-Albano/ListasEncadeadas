#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "lista_int.h"

int main(/*int nargs, char ** args*/) {
    srand(time(NULL));

    LISTA_INT * lista = lst_criar();

    for (int i = 1; i <= 10; i++) {
        lista = lst_inserir_final(lista, i);
    }

    lst_imprimir(lista);

    printf("\n***CONTADOR***\n");
    int num;

    num = lst_cont(lista);
    printf("\n%d nodos", num);

/*--------------------------------------------------------------*/

    printf("\n***COPIAR***\n");

    LISTA_INT * listaCopia = lst_criar();
    listaCopia = lst_copiar(lista, listaCopia);
    lst_imprimir(listaCopia);

/*--------------------------------------------------------------*/

    printf("\n***CONCATENA***\n");

    LISTA_INT * listaConcatena = lst_criar();
    lst_concatena(lista, listaConcatena);
    lst_imprimir(listaConcatena);
    for (int i = 10; i <= 20; i++) {
        listaConcatena = lst_inserir_final(listaConcatena, i);
    }

/*--------------------------------------------------------------*/

    printf("\n***VETOR***\n");
    LISTA_INT * listaVetor;
     int n = rand() % 15;
     int vetor[n];

     for (int i = 0; i < n; i++){
        vetor[i] = rand() % 30;

     }

     listaVetor = lst_vetor(vetor, n);
     lst_imprimir(listaVetor);

/*--------------------------------------------------------------*/

    printf("\n***RESULTANTE***\n");

    int n_resultante;
    printf("\nInsira o numero(positivo) a ser retirado: ");
    scanf("%d", &n_resultante);

    lista = lst_resultante(lista, n_resultante);

/*--------------------------------------------------------------*/

    printf("\n***DIVIDE***\n");
    
    LISTA_INT * listaDivide = lst_criar();
    int n_divide = rand() % 9 + 1;

    listaDivide = lst_divide(lista, n_divide);
    lst_imprimir(listaDivide);

/*--------------------------------------------------------------*/

                                //  ***INVERTE***
                                    //  ***ORGANIZA***
                                    // LISTA_INT * listaOrganiza = lst_organiza(lista);










    printf("\n******** Nova lista ********");



            // lst_imprimir(listaCopia);




                // lista = lst_remover(lista, 1);
                // lista = lst_remover(lista, 7);
                // lista = lst_remover(lista, 10);

                // printf("------------\n");

                // lst_imprimir(lista);
    
    lst_liberar(lista);
    return EXIT_SUCCESS;
}

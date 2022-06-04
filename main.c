#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "lista_int.h"

int main(/*int nargs, char ** args*/) {
    srand(time(NULL));

    printf("\n\n***LISTA INICIAL***\n");

    LISTA_INT * lista = lst_criar();

    for (int i = 1; i <= 10; i++) {
        lista = lst_inserir_final(lista, i);
    }

    lst_imprimir(lista);

    printf("\n\n***CONTADOR***\n");
    int num;

    num = lst_cont(lista);
    printf("\n%d nodos\n", num);

/*--------------------------------------------------------------*/

    printf("\n\n***COPIAR***\n");

    LISTA_INT * listaCopia = lst_criar();
    listaCopia = lst_copiar(lista, listaCopia);
    lst_imprimir(listaCopia);

/*--------------------------------------------------------------*/

    printf("\n\n***CONCATENA***\n");

    LISTA_INT * listaConcatena = lst_criar();
    for (int i = 10; i <= 20; i++) {
        listaConcatena = lst_inserir_final(listaConcatena, i);
    }
    lst_concatena(lista, listaConcatena);
    lst_imprimir(listaConcatena);

/*--------------------------------------------------------------*/

    printf("\n\n***VETOR***\n");
    LISTA_INT * listaVetor;
     int n = rand() % 15;
     int vetor[n];

     for (int i = 0; i < n; i++){
        vetor[i] = rand() % 30;

     }

     listaVetor = lst_vetor(vetor, n);
     lst_imprimir(listaVetor);

/*--------------------------------------------------------------*/

    printf("\n\n***RESULTANTE***\n");

    LISTA_INT * listaResultante = lst_criar();
    int n_resultante;

    for (int i = 1; i <= 10; i++) {
        listaResultante = lst_inserir_final(listaResultante, i);
    }
    
    printf("\nInsira o numero(positivo) a ser retirado: ");
    scanf("%d", &n_resultante);

    listaResultante = lst_resultante(listaResultante, n_resultante);
    lst_imprimir(listaResultante);

/*--------------------------------------------------------------*/

    printf("\n\n***DIVIDE***\n");
    
    LISTA_INT * listaDivide = lst_criar();
    int n_divide = rand() % 9 + 1;

    for (int i = 1; i <= 10; i++) {
        listaDivide = lst_inserir_final(listaDivide, i);
    }

    lst_imprimir(listaDivide);
    listaDivide = lst_divide(listaDivide, n_divide);
    printf("\nlista dividida:\n");
    lst_imprimir(listaDivide);

/*--------------------------------------------------------------*/

    // printf("\n***INVERTE***\n");
    // Nao consegui fazer >:(


/*--------------------------------------------------------------*/

    printf("\n\n***ORGANIZA***\n");

    LISTA_INT * listaOrganiza = lst_criar();

    for (int i = 0; i < 10; i++){
        listaOrganiza = lst_inserir_final(listaOrganiza, rand() % 9 + 1);
    }
    
    lst_imprimir(listaOrganiza);

    printf("\n^^^ Lista Desorganizada\nvvv Lista Organizada");

    listaOrganiza = lst_organiza(listaOrganiza);
    lst_imprimir(listaOrganiza);

/*--------------------------------------------------------------*/
    
    lst_liberar(lista);
    lst_liberar(listaConcatena);
    lst_liberar(listaCopia);
    lst_liberar(listaDivide);
    lst_liberar(listaOrganiza);
    lst_liberar(listaResultante);
    lst_liberar(listaVetor);

    return EXIT_SUCCESS;
}

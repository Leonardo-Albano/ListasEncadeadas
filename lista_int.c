#include <stdlib.h>
#include <stdio.h>
#include "lista_int.h"

LISTA_INT * lst_criar(void) {
    return (LISTA_INT *) NULL;
}

LISTA_INT * lst_inserir(LISTA_INT * lista, int info) {
    LISTA_INT * nodo = (LISTA_INT *) malloc(sizeof(LISTA_INT));
    nodo->info = info;
    nodo->ptr_proximo = lista;
    return nodo;
}

void lst_imprimir(LISTA_INT * lista) {
    LISTA_INT * nodo = lista;
    while (nodo != NULL) {
        printf("\n%d", nodo->info);
        nodo = nodo->ptr_proximo;
    }
}

void lst_liberar(LISTA_INT * lista) {
    LISTA_INT * nodo = lista, * aux;
    while (nodo != NULL) {
        aux = nodo->ptr_proximo;
        free(nodo);
        nodo = aux;
    }    
}

LISTA_INT * lst_buscar(LISTA_INT * lista, int info) {
    LISTA_INT * nodo = lista;
    while (nodo != NULL) {
        if (nodo->info == info) {
            return nodo;
        }
        nodo = nodo->ptr_proximo;
    }
    return NULL;
}

LISTA_INT * lst_inserir_final(LISTA_INT * lista, int info) {
    LISTA_INT * nodo = lista;
    LISTA_INT * novo = NULL;
    if (nodo == NULL) {
        nodo = (LISTA_INT *) malloc(sizeof(LISTA_INT));
        nodo->info = info;
        nodo->ptr_proximo = NULL;
        return nodo;
    } else {
        while (nodo->ptr_proximo != NULL) {
            nodo = nodo->ptr_proximo;
        }
        novo = (LISTA_INT *) malloc(sizeof(LISTA_INT));
        novo->info = info;
        novo->ptr_proximo = NULL;
        nodo->ptr_proximo = novo;
        return lista;
    }
}

LISTA_INT * lst_remover(LISTA_INT * lista, int info) {
    LISTA_INT * nodo = lista;
    LISTA_INT * nodo_ant = NULL;

    while (nodo != NULL && nodo->info != info) {
        nodo_ant = nodo;
        nodo = nodo->ptr_proximo;
    }

    if (nodo == NULL) {
        return lista;
    }

    if (nodo_ant == NULL) {
        lista = nodo->ptr_proximo;
    } else {
        nodo_ant->ptr_proximo = nodo->ptr_proximo;
    }

    free(nodo);
    return lista;
}

int lst_cont(LISTA_INT * lista){
    LISTA_INT * nodo = lista;
    int cont=0;

    while (nodo != NULL) {
        cont++;
        nodo = nodo->ptr_proximo;
    }
    
    return cont;
}

LISTA_INT * lst_copiar(LISTA_INT * lista, LISTA_INT * listaCopia){

    LISTA_INT * nodo = lista;
    LISTA_INT * nodoCopy = listaCopia;

    if (nodo==NULL){
        printf("\nNodo eh NULL, nao pode ser copiado\n");
        return nodo;
    }

    while (nodo!=NULL){
        nodoCopy = lst_inserir_final(nodoCopy, nodo->info);
        nodo = nodo->ptr_proximo;
    }
    
    return nodoCopy;
}

void lst_concatena(LISTA_INT * lista, LISTA_INT * lista2){
    LISTA_INT * nodo = lista;
    LISTA_INT * nodo2 = lista2;
    
    while (nodo2->ptr_proximo!=NULL){
        nodo2=nodo2->ptr_proximo;
    }

    nodo2->ptr_proximo=nodo;
}

LISTA_INT * lst_vetor(int *vet, int n){
    LISTA_INT * listaVetor = lst_criar();

    for (int i = 0; i < n; i++){
        listaVetor = lst_inserir_final(listaVetor, vet[i]);
    }
    
    return listaVetor;

}





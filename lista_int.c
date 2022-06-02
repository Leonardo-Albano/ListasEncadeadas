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
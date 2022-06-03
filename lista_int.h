typedef struct nodo_int {
    int info;
    struct nodo_int * ptr_proximo;
} LISTA_INT;

LISTA_INT * lst_criar(void);
LISTA_INT * lst_inserir(LISTA_INT * lista, int info);
void lst_imprimir(LISTA_INT * lista);
void lst_liberar(LISTA_INT * lista);
LISTA_INT * lst_buscar(LISTA_INT * lista, int info);
LISTA_INT * lst_inserir_final(LISTA_INT * lista, int info);
LISTA_INT * lst_remover(LISTA_INT * lista, int info);
int lst_cont(LISTA_INT * lista);
LISTA_INT * lst_copiar(LISTA_INT * lista, LISTA_INT * listaCopia);
void lst_concatena(LISTA_INT * lista, LISTA_INT * lista2);
LISTA_INT * lst_vetor(int *vet, int n);
LISTA_INT * lst_resultante(LISTA_INT * lista, int n);
LISTA_INT * lst_divide(LISTA_INT * lista, int n);
// LISTA_INT * lst_inverte(LISTA_INT * lista);
LISTA_INT * lst_organiza(LISTA_INT * lista);
/*
 * Tarefa de laboratorio 00_a - Pilha
 *
 * GEN254 - Grafos - 2022/2
 *
 * Nome:      XXXX
 * Matricula: XXXX
 */

#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

struct grafo {
    int vert;
    int arest;
    int **matriz;
};

Grafo *Grafoconstroi(int numVerts) {
    Grafo *g;

    g = malloc(sizeof(*g));
    g->vert=numVerts;
    g->arest=0; //padrao
    g->matriz=malloc(numVerts*(sizeof(int*)));
    for (int i = 0; i < numVerts; i++)
    {   
        g->matriz[i]=malloc(numVerts* sizeof(int));
    }
    for (int i = 0; i < numVerts; i++)
    {
        for (int j = 0; j < numVerts; j++)
        {
            g->matriz[i][j]=0;
        }
        
    }
    return g;
    
}
void Grafodestroi(Grafo *g) {

    for (int i = 0; i < g->vert; i++)
    {
        free(g->matriz[i]); //tirando os elementos da linha
    }
    free(g->matriz);
    free(g);

}

// bool Grafovazia(Grafo *p) {
//     return (p->topo == NULL);
// }

// void Grafoinsere(Grafo *p, Aresta i) {
//     ElemGrafo *aux;

//     // Cria um novo elemento da lista encadeada que representa a Grafo e
//     // armazena neste novo elemento o item a ser inserido na Grafo
//     aux = malloc(sizeof(*aux));
//     aux->aresta = i;

//     // Insere o novo elemento no inicio da lista encadeada que representa a
//     // Grafo
//     aux->proximo = p->topo;
//     p->topo = aux;
// }

// Aresta Graforemove(Grafo *p) {
//     Aresta i;
//     ElemGrafo *aux;

//     if (Grafovazia(p)) {
//         printf("Erro na operacao Graforemove: Grafo vazia!\n");
//         exit(EXIT_FAILURE);
//     }

//     // Armazena o item a ser removido da Grafo
//     i = p->topo->item;

//     // Armazena o primeiro elemento da lista encadeada que representa a Grafo
//     // e remove este primeiro elemento da lista
//     aux = p->topo;
//     p->topo = p->topo->proximo;

//     // Libera a memoria alocada para o elemento removido
//     free(aux);

//     // Retorna o item removido da Grafo
//     return i;
// }

// 

/*
 * Tarefa de laboratorio 00_a - Pilha
 *
 * GEN254 - Grafos - 2022/2
 *
 * Nome:      XXXX
 * Matricula: XXXX
 */

#ifndef GRAFO.h

#define GRAFO.h

#include <stdbool.h>
#include "aresta.h"

typedef struct grafo Grafo;

Grafo *GRAFOconstroi();

bool Grafovazia(Grafo *g);

void GrafoinsereAresta(Grafo *g, Aresta a);

void GraforemoveAresta(Grafo *g,Aresta a);

int GrafoNumArestas(Grafo *g);
int GrafoNumVertices(Grafo *g);

void GrafoImprime(Grafo *g);

void Grafodestroi(Grafo *g);


#endif /* GRAFO.h */

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
#include "item.h"
#include "pilha.h"

int main() {
    int N;
    Pilha *pilha;
    int i;
    Item val;
    Item item;

    scanf("%d", &N);

    pilha = PILHAconstroi();

    for (i = 0; i < N; i++) {
        scanf("%d", &val);

        if (val >= 0) {
            PILHAinsere(pilha, val);
        }
        else {
            if(PILHAvazia(pilha)) {
                printf("Pilha vazia!\n");
            }
            else {
                item = PILHAremove(pilha);

                printf("%d\n", item);
            }
        }
    }

    PILHAdestroi(pilha);

    return 0;
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void heapsort(int v[], int tam);
void heapify(int v[], int tam, int i);
void troca(int v[], int i, int j);

int main() {
    clock_t tempo_inicial, tempo_final;
    double tempo_gasto;

    int v[1000];
    int tam = 1000;

    for (int i = 0; i < tam; i++) {
        v[i] = rand();
    }

    tempo_inicial = clock();

    heapsort(v, tam);

    tempo_final = clock();

    tempo_gasto = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    printf("Tempo de execucao: %.6f segundos\n", tempo_gasto);

    return 0;
}

void heapsort(int v[], int tam) {
    for (int i = (tam - 1) / 2; i >= 0; i--) {
        heapify(v, tam, i);
    }

    for (int i = tam - 1; i > 0; i--) {
        troca(v, 0, i);
        heapify(v, i, 0);
    }
}

void heapify(int v[], int tam, int i) {
    int maior = i;
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;

    if (esq < tam && v[esq] > v[maior])
        maior = esq;

    if (dir < tam && v[dir] > v[maior])
        maior = dir;

    if (maior != i) {
        troca(v, i, maior);
        heapify(v, tam, maior);
    }
}

void troca(int v[], int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
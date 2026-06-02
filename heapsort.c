#include <stdio.h>
#include <time.h>


void heapsort(int v[], int tam);
void heapify(int v[], int tam, int i);
void troca(int v[], int i, int j);

int main() {
    clock_t tempo_inicial, tempo_final;
    double tempo_gasto;
    tempo_inicial = clock();
    int v[] = { 56, 22 , 72 , 74 , 19 , 15 , 9 , 51 };
    int tam = sizeof(v) / sizeof(v[0]);
    
    printf("Array de entrada: \n");
    for (int i = 0; i < tam; ++i)
        printf("%d ", v[i]);
    printf("\n\n");
    
    heapsort(v, tam);
    
    printf("\n\nVetor ordenado: |");
    for (int i = 0; i < tam; ++i)
        printf(" %d |", v[i]);
    printf("\n");
    tempo_final = clock();

    tempo_gasto = ((double)(tempo_final - tempo_inicial)) / CLOCKS_PER_SEC;

    printf("\nTempo de execucao: %.f segundos\n", tempo_gasto);

}

void heapsort(int v[], int tam) {
  int o =1;
  
  for (int i = (tam -1 )/ 2 ; i >= 0; i--){printf("\n%d° Iteração",o++);
    printf("\ni)Trocas do heapify: ");
     heapify(v, tam, i);
  printf("\nii)Vetor saída do heapify: |");
  for (int l = 0; l < tam; ++l)
    printf(" %d | ", v[l]);
  printf("\n");}
   printf("\nVetor saída etapa 1: |");
  for (int i = 0; i < tam; ++i)
    printf(" %d | ", v[i]);
  printf("\n");
  o =1;
  for (int i = tam - 1; i > 0; i--) {   
    printf("\n%d° Iteração", o++);
    troca(v, 0, i);   
    printf("\ni)Vetor resultante da Função Troca: |");
  for (int i = 0; i < tam; ++i)
    printf(" %d | ", v[i]);
  printf("\nii)Trocas do heapify: ");
    heapify(v, i, 0);
    printf("\niii)Vetor saída do heapify: |");
  for (int i = 0; i < tam; ++i)
    printf(" %d | ", v[i]);
  printf("\n");
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
    printf("%d troca com o %d, ", v[maior], v[i]);
    heapify(v, tam, maior);
  }
}

void troca(int v[], int i, int j){
	int aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}
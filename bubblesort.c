#include <stdio.h>
#include <time.h>

void bubble(int *array,int tamanho);

int main(){
    clock_t tempo_inicial , tempo_final;
    double tempo_gasto;

    int ar[1000];
    for(int i = 0; i<1000;i++){
        ar[i] = i;
    }
    tempo_inicial = clock();
    bubble(ar,1000);
    tempo_final = clock();
    tempo_gasto = ((double)(tempo_final - tempo_inicial)) / CLOCKS_PER_SEC;

    printf("\nTempo de execucao: %f segundos\n", tempo_gasto);
}   	

void bubble(int *array,int tamanho){
   for(int n= 1; n<=tamanho ; n++) {
  	 for(int j=0; j<tamanho-1; j++) {
     	if (array[j] > array[j+1] ) { 	 
        	   int aux = array[j];
        	   array[j] = array[j+1];
        	   array[j+1] = aux; 
     	}
  	 }
   } 

}
#include <stdio.h>
#include <time.h>

void bubble(int *array);

int main(){
    clock_t tempo_inicial , tempo_final;
    long double tempo_gasto;
    tempo_inicial = clock();
    int ar[] = {1,0,10,3,4,5,6,7,8,2};
    bubble(ar);
    tempo_final = clock();
    tempo_gasto = ((long double)(tempo_final - tempo_inicial)) / CLOCKS_PER_SEC;

    printf("\nTempo de execucao: %.30Lf segundos\n", tempo_gasto);
}   	

void bubble(int *array){
   for(int n= 1; n<=(int)sizeof(array) ; n++) {
  	 for(int j=0; j<(int)sizeof(array)-1; j++) {
     	if (array[j] > array[j+1] ) { 	 
        	   int aux = array[j];
        	   array[j] = array[j+1];
        	   array[j+1] = aux; 
     	}
  	 }
   } 
    for(int i = 0; i <(int)sizeof(array); i++){
   	 printf(" %d ", array[i]);
    }
}
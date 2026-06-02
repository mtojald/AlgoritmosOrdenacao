#include <stdio.h>

void bubble(int *array);

int main(){
    int ar[] = {1,0,10,3,4,5,6,7,8,2};
    bubble(ar);
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
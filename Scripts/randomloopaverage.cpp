#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>

int main(){
	int suma = 0;
	int n = 10;
       	srand(time(NULL));	
	for(int j = 0; j < n; j++){
		int counter = 0;
		for(int i=0;i<((rand()%100) + 1);i++)
			counter++;
		suma = suma + counter;
	}
	float promedio = suma/n; 
	printf("El valor promedio fue %f", promedio);
	return 0;
}

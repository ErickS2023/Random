//generar un numero especifico de numeros aleatorios y calcular la suma

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
	int num;
	int numeroaleatorio=rand()%5;
	srand(time(NULL));

	
	printf("Cuales son los numeros que desea: \n");
	scanf("%d", &num);
	
	int a=0;
	int suma=0;
	while(a<num){
		
		numeroaleatorio=rand()%51;
		printf("numero aleatorio: %d\n", numeroaleatorio);
		suma= suma + numeroaleatorio;
		a++;
	}
	
	printf("La suma de sus  valores seleccionados es: %d\n",suma);
     
    printf("\a");
	return 0;
}
	






 

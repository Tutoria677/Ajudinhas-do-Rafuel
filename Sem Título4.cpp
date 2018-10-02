#include <stdio.h>


void fibonacci(int contador){
	int fib = 1, n = 1, a = 0, aux = 0;
	int i = 0;
	int vetor[contador];
	
	printf("Fibonacci: ");
	while(i < contador){
		fib = n + a;
		aux = a;
		a = n;
		n = fib;
		//vetor[i] = n;
		printf(" %d ",fib);
		i++;
	}
	
}


int main(){
	int num;
	
		printf("Digite um numero natural: ");
		scanf("%d",&num);	
		while(!(num >= 0 && num < 10)){
			printf("Digite um numero NATURAL: ");
			scanf("%d",&num);
		}
		fibonacci(num);
		
	return 0;
}

#include <stdio.h>

void seila (int a,int b, int c){
	a = 1;
	b = 2;
	c = 3;
	
	for(int i = 0; i < 3; i++){
		a++;
		b--;
	}
	printf("%d - %d - %d",b,a,c);
}

main(void){
	int x = 5, y = 3, z = 1;
	int aux = 0;
	
	aux = x ;
	x = y;
	y = z;
	z = aux;
	
	seila(x,y,z);	
	
}//sz

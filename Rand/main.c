#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int a;
	//(rand() % 10)+1  1-10�ü�
	//(rand() % 100)+1  1-100�ü� 
	//(rand() % 901)+1  100-1000�ü� 
	a = (rand() % 10)+1;
	printf("The Random Number is %d .\n", a);
	
}

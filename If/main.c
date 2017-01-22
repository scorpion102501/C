#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
 	printf("A, B=> ");
 	scanf("%d %d", &a, &b);
 	if(a<b) printf("%d<%d\n", a, b);
	if(a>b) printf("%d>%d\n", a, b);
 	if(a==b) printf("%d=%d\n", a, b);
	return 0;
}

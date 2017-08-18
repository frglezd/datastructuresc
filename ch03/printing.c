#include <stdio.h>

void main(){

	int J, K;
	scanf("%d %d", &J, &K);
	if(J>K)
		printf("%d %d\n", J,K);
	if(J<K)
		printf("%d %d\n", K,J);
}
